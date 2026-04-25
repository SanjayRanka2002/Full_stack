package com.campusbot.dto;

import jakarta.validation.constraints.NotBlank;
import lombok.Data;

@Data
public class AskRequest {
    @NotBlank(message = "Question cannot be blank")
    private String question;
}
