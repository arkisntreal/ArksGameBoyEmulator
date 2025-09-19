#include <window.h>

Window::Window() {
    window.create(sf::VideoMode({800, 600}), "Ark's GameBoy Emulator!");    
    adoTexture.loadFromFile("/home/arc/Projects/GameBoyEmulator/textures/adoparty.png");
    ado = sf::Sprite(adoTexture);
}

