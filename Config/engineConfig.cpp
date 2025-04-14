#include "./defines.h"
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <sstream>

std::map<string, string> loadEngineConfigFile() {
    std::map<string, string> configOptions;
    string configFileLocation = "conGenConfig.cfg";
    std::fstream configFile;

    configFile.open(configFileLocation, std::ios::in);
    if (!configFile) {
        std::cout << "Warning: Engine Config File not found. Please redownload the default config file." << std::endl;
        return configOptions; // Return an empty map
    }

    string line;
    while (std::getline(configFile, line)) {
        // Ignore empty lines
        if (line.empty() || line[0]== '#') continue;

        // Find the position of the colon
        size_t delimiterPos = line.find(':');
        if (delimiterPos != string::npos) {
            // Extract CONFIG_OPTION and setting
            string key = line.substr(0, delimiterPos);
            string value = line.substr(delimiterPos + 1);

            // Trim whitespace from key and value
            key.erase(0, key.find_first_not_of(" \t"));
            key.erase(key.find_last_not_of(" \t") + 1);
            value.erase(0, value.find_first_not_of(" \t"));
            value.erase(value.find_last_not_of(" \t") + 1);

            // Store in the map
            configOptions[key] = value;
        }
    }

    configFile.close();
    return configOptions;
}

