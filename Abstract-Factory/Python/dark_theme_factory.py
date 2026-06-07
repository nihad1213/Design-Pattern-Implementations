from ui_factory import UIFactory
from dark_button import DarkButton
from dark_checkbox import DarkCheckbox

class DarkThemeFactory(UIFactory):
    def create_button(self) -> DarkButton:
        return DarkButton()

    def create_checkbox(self) -> DarkCheckbox:
        return DarkCheckbox()
