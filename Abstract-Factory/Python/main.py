from ui_factory import UIFactory
from light_theme_factory import LightThemeFactory
from dark_theme_factory import DarkThemeFactory

def render_ui(factory: UIFactory) -> None:
    button = factory.create_button()
    checkbox = factory.create_checkbox()

    button.render()
    checkbox.render()

print("=== Light Theme ===")
render_ui(LightThemeFactory())

print("=== Dark Theme ===")
render_ui(DarkThemeFactory())
