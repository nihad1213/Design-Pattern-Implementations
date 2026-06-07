#ifndef DARK_BUTTON_H
#define DARK_BUTTON_H

#include "Button.h"
#include <iostream>

class DarkButton : public Button {
public:
    void render() override {
        std::cout << "Rendering Dark Button [dark background, white text]" << std::endl;
    }
};

#endif
