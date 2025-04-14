#include "main.hpp"
#include <SFML/Graphics.hpp>

int main(){
    std::map <std::string, std::string> configOptions = loadEngineConfigFile();
    std::cout << "CodeGen Starting..."<<std::endl;
   
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


    
        sf::RenderWindow window(sf::VideoMode({width, height}), windowTitle);
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
    
        while (window.isOpen())
        {
            while (const std::optional event = window.pollEvent())
            {
                if (event->is<sf::Event::Closed>())
                    window.close();
            }
    
            window.clear();
            window.draw(shape);
            window.display();
        }
    
    return 0;
}
