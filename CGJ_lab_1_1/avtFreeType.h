#pragma once

void freeType_init(const std::string font_name);
void RenderText(VSShaderLib& shader, std::string text, float x, float y, float scale, float cR, float cG, float cB);

// Custom functions
float stringWidth(std::string text);
float stringHeight(std::string text);