#include "main.hpp"
#include <SFML/Graphics.hpp>

int main(){
    std::map <std::string, std::string> configOptions = loadEngineConfigFile();
    std::cout << "CodeGen Starting..."<<std::endl;
   
    



    
        sf::RenderWindow window(sf::VideoMode({200, 200}), "");
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
