#ifndef LIGHT_BUTTON_H
#define LIGHT_BUTTON_H

#include "Button.h"
#include <iostream>

class LightButton : public Button {
public:
    void render() override {
        std::cout << "Rendering Light Button [white background, dark text]" << std::endl;
    }
};

#endif
