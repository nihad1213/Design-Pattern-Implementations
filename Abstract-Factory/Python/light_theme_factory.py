from ui_factory import UIFactory
from light_button import LightButton
from light_checkbox import LightCheckbox

class LightThemeFactory(UIFactory):
    def create_button(self) -> LightButton:
        return LightButton()

    def create_checkbox(self) -> LightCheckbox:
        return LightCheckbox()
