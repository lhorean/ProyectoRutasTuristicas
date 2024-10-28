#include <SFML/Graphics.hpp>
#include "map.h"

void showMap() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mapa turistico");

    sf::Texture mapTexture;
    if (!mapTexture.loadFromFile("mapa.png")) {
        return;
    }

    sf::Sprite mapSprite;
    mapSprite.setTexture(mapTexture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

    }
}
