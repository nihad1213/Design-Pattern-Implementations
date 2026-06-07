#ifndef LIGHT_CHECKBOX_H
#define LIGHT_CHECKBOX_H

#include "Checkbox.h"
#include <iostream>

class LightCheckbox : public Checkbox {
public:
    void render() override {
        std::cout << "Rendering Light Checkbox [white fill, dark border]" << std::endl;
    }
};

#endif
