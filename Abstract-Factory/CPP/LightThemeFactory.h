#ifndef LIGHT_THEME_FACTORY_H
#define LIGHT_THEME_FACTORY_H

#include "UIFactory.h"
#include "LightButton.h"
#include "LightCheckbox.h"

class LightThemeFactory : public UIFactory {
public:
    Button* createButton() override {
        return new LightButton();
    }

    Checkbox* createCheckbox() override {
        return new LightCheckbox();
    }
};

#endif
