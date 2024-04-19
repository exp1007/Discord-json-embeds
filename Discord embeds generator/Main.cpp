#include <iostream>
#include "EmbedGenerator.hpp"

int main() {
	// Hardcoded example input
	const char* color = discordBlue;
	const char* title = "Weblogger";
	std::vector<std::pair<std::string, std::string>> exampleFields = { {"Site", "https://example.com"}, {"User", "Test_user"},  {"Role", "Designer"} };
	// 

	std::string jsonCode = generateDiscordEmbed(title, color, exampleFields);
	std::cout << jsonCode;
}
