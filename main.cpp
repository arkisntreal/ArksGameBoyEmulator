#include <iostream>

#include <windowmanager.h>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!" << std::endl;

    WindowManager windowManager;
    windowManager.initialize();

    return 0;
}

