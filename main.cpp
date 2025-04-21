#include "main.hpp"
#include <SFML/Graphics.hpp>
const     std::map <std::string, std::string> configOptions = loadEngineConfigFile();
int width, height;
std::string windowTitle;
int main(){

    std::cout << "CodeGen Starting..."<<std::endl;
   
     

    
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
