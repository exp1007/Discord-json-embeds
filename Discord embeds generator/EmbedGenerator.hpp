#pragma once

#include <string>
#include <sstream>
#include <vector>

// These are HEX colors converted to ints
constexpr const char* discordRed = "16711680";
constexpr const char* discordYellow = "16449280";
constexpr const char* discordGreen = "65290";
constexpr const char* discordCyan = "65520";
constexpr const char* discordBlue = "2815";
constexpr const char* discordPink = "16711935";

std::string generateDiscordEmbed(const char* title, const char* color, std::vector<std::pair<std::string, std::string>> fields);