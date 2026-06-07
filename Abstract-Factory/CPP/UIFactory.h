#ifndef UI_FACTORY_H
#define UI_FACTORY_H

#include "Button.h"
#include "Checkbox.h"

class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
    virtual ~UIFactory() {}
};

#endif
