package com.campusbot.controller;

import com.campusbot.dto.AskRequest;
import com.campusbot.dto.AskResponse;
import com.campusbot.service.FaqService;
import jakarta.validation.Valid;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api/v1")
@RequiredArgsConstructor
public class FaqController {

    private final FaqService faqService;

    @PostMapping("/ask-question")
    public ResponseEntity<AskResponse> askQuestion(@Valid @RequestBody AskRequest askRequest) {
        AskResponse response = faqService.askQuestion(askRequest);
        return ResponseEntity.ok(response);
    }
}
