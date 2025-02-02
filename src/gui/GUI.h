#ifndef GUI_H
#define GUI_H

#include <string>

class GUI {
public:
    void initialize();
    void render();
    void handleEvents();
    void showError(const std::string& message);
};

#endif
