package com.campusbot.client;

import com.campusbot.config.AiConfig;
import com.campusbot.dto.AiResponse;
import com.campusbot.exception.AiServiceException;
import com.fasterxml.jackson.databind.ObjectMapper;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Component;

import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.time.Duration;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@Slf4j
@Component
public class AiClient {

    private final AiConfig aiConfig;
    private final ObjectMapper objectMapper;
    private final HttpClient httpClient;

    private static final String SYSTEM_PROMPT = "You are CampusBot, answer only academic/campus-related queries clearly and concisely.";

    public AiClient(AiConfig aiConfig, ObjectMapper objectMapper) {
        this.aiConfig = aiConfig;
        this.objectMapper = objectMapper;
        this.httpClient = HttpClient.newBuilder()
                .connectTimeout(Duration.ofSeconds(aiConfig.getTimeoutSeconds()))
                .build();
    }

    public String askQuestion(String prompt) {
        log.info("Sending request to AI Client for prompt: {}", prompt);
        
        try {
            Map<String, Object> requestBody = new HashMap<>();
            requestBody.put("model", "gpt-3.5-turbo");
            requestBody.put("messages", List.of(
                    Map.of("role", "system", "content", SYSTEM_PROMPT),
                    Map.of("role", "user", "content", prompt)
            ));

            String jsonBody = objectMapper.writeValueAsString(requestBody);

            HttpRequest request = HttpRequest.newBuilder()
                    .uri(URI.create(aiConfig.getBaseUrl()))
                    .header("Authorization", "Bearer " + aiConfig.getApiKey())
                    .header("Content-Type", "application/json")
                    .timeout(Duration.ofSeconds(aiConfig.getTimeoutSeconds()))
                    .POST(HttpRequest.BodyPublishers.ofString(jsonBody))
                    .build();

            HttpResponse<String> response = httpClient.send(request, HttpResponse.BodyHandlers.ofString());

            if (response.statusCode() >= 400) {
                log.error("AI API Error: {}", response.body());
                throw new AiServiceException("Failed to get response from AI. Status code: " + response.statusCode());
            }

            AiResponse aiResponse = objectMapper.readValue(response.body(), AiResponse.class);

            if (aiResponse.getChoices() != null && !aiResponse.getChoices().isEmpty()) {
                return aiResponse.getChoices().get(0).getMessage().getContent().trim();
            } else {
                throw new AiServiceException("Empty response received from AI");
            }
        } catch (java.net.http.HttpTimeoutException e) {
            log.error("AI API Request timed out", e);
            throw new AiServiceException("AI request timed out", e);
        } catch (Exception e) {
            log.error("Error calling AI API", e);
            throw new AiServiceException("Error while communicating with AI service", e);
        }
    }
}
