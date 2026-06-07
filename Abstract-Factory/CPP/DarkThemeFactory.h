#ifndef DARK_THEME_FACTORY_H
#define DARK_THEME_FACTORY_H

#include "UIFactory.h"
#include "DarkButton.h"
#include "DarkCheckbox.h"

class DarkThemeFactory : public UIFactory {
public:
    Button* createButton() override {
        return new DarkButton();
    }

    Checkbox* createCheckbox() override {
        return new DarkCheckbox();
    }
};

#endif
