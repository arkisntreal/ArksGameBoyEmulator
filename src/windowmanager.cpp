#include <windowmanager.h>

void WindowManager::initialize() {
    Window *mainWindow = new Window();
    windowList.push_back(mainWindow);

    while(windowList[0]->window.isOpen()) {
        sf::Event event;
        while(windowList[0]->window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                windowList[0]->window.close();
            }
        }

        windowList[0]->window.clear();
        windowList[0]->window.draw(windowList[0]->ado);
        windowList[0]->window.display();
    }
}

