#include "engineConfig.hpp"
void configInit(){  

    //Set resolution variables from config map:
          unsigned int width, height;
          std::string windowTitle;
          if (configOptions.find("RESOLUTION_WIDTH") != configOptions.end()) {
              width = std::stoi(configOptions["RESOLUTION_WIDTH"]);
          } else {
              width = 800; // Default width
          }
          if (configOptions.find("RESOLUTION_HEIGHT") != configOptions.end()) {
              height = std::stoi(configOptions["RESOLUTION_HEIGHT"]);
          } else {
              height = 600; // Default height
          }
          if (configOptions.find("APPLICATION_TITLE") != configOptions.end()) {
              windowTitle = configOptions["APPLICATION_TITLE"];
          } else {
             windowTitle = "You didnt set the window title config option dummy";
          }
      }