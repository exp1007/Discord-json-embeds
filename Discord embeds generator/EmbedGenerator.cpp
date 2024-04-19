#include "EmbedGenerator.hpp"

std::string generateDiscordEmbed(const char* title, const char* color, std::vector<std::pair<std::string, std::string>> fields) {
    // Build the JSON string
    std::ostringstream oss;
    oss << R"({
      "embeds": [
        {
          "title": ")" << title << R"(",
          "color": )" << color << R"(,
          "fields": [)";

    // Looping through fields
    for (auto it = fields.begin(); it != fields.end(); ++it) {

        // Checks if it's the last field so it doesn't add ","
        if (fields.end() == std::next(it)) {
            oss << R"({
            "name": ")" << it->first << R"(",
              "value": ")" << it->second << R"("
            })";
        }
        else {
            oss << R"({
            "name": ")" << it->first << R"(",
              "value": ")" << it->second << R"("
            },)";
        }
    }

    oss << R"(]
        }
      ]
    })";

    return oss.str();
}