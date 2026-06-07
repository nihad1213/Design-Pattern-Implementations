#ifndef DARK_CHECKBOX_H
#define DARK_CHECKBOX_H

#include "Checkbox.h"
#include <iostream>

class DarkCheckbox : public Checkbox {
public:
    void render() override {
        std::cout << "Rendering Dark Checkbox [dark fill, light border]" << std::endl;
    }
};

#endif
