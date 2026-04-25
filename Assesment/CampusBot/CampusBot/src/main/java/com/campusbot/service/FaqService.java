package com.campusbot.service;

import com.campusbot.client.AiClient;
import com.campusbot.dto.AskRequest;
import com.campusbot.dto.AskResponse;
import io.github.resilience4j.circuitbreaker.annotation.CircuitBreaker;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;

import java.time.Instant;

@Slf4j
@Service
@RequiredArgsConstructor
public class FaqService {

    private final AiClient aiClient;

    @CircuitBreaker(name = "aiService", fallbackMethod = "askFallback")
    public AskResponse askQuestion(AskRequest askRequest) {
        log.info("Processing question: {}", askRequest.getQuestion());
        
        String answer = aiClient.askQuestion(askRequest.getQuestion());
        
        return AskResponse.builder()
                .answer(answer)
                .status("success")
                .timestamp(Instant.now().toString())
                .build();
    }

    // Fallback logic when circuit breaker is open or external service is down
    public AskResponse askFallback(AskRequest askRequest, Throwable ex) {
        log.warn("Fallback triggered for question: {} due to: {}", askRequest.getQuestion(), ex.getMessage());
        return AskResponse.builder()
                .answer("I'm currently unable to connect to my knowledge base. Please contact the campus administration for urgent academic queries.")
                .status("fallback")
                .timestamp(Instant.now().toString())
                .build();
    }
}
