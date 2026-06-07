#include "LightThemeFactory.h"
#include "DarkThemeFactory.h"

void renderUI(UIFactory* factory) {
    Button* button = factory->createButton();
    Checkbox* checkbox = factory->createCheckbox();

    button->render();
    checkbox->render();

    delete button;
    delete checkbox;
}

int main() {
    UIFactory* lightFactory = new LightThemeFactory();
    std::cout << "=== Light Theme ===" << std::endl;
    renderUI(lightFactory);

    UIFactory* darkFactory = new DarkThemeFactory();
    std::cout << "=== Dark Theme ===" << std::endl;
    renderUI(darkFactory);

    delete lightFactory;
    delete darkFactory;
}
