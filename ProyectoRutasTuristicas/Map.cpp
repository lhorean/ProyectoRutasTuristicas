#include <SFML/Graphics.hpp>
#include "map.h"
#include <iostream>
using namespace std;

void showMap() {
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mapa");

    
    sf::Texture texture;
    if (!texture.loadFromFile("mapa.png")) {
        cerr << "Error: No se pudo cargar la imagen." << std::endl;
       
    }

    
    sf::Sprite sprite;
    sprite.setTexture(texture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
  
}
