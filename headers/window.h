#ifndef GBEMU_WINDOW_H_

#include <SFML/Graphics.hpp>

class Window {
public:
    sf::RenderWindow window;
    sf::Texture adoTexture;
    sf::Sprite ado;
    
    Window();
};

#endif
#define GBEMU_WINDOW_H_
