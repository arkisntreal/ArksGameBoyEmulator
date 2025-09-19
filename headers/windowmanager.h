#ifndef GBEMU_WINDOW_MANAGER_H_

#include <vector>

#include <window.h>

class WindowManager {
    std::vector<Window*> windowList;

public:
    void initialize();
};

#endif
#define GBEMU_WINDOW_MANAGER_H_

