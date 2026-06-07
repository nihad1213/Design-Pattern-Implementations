from button import Button

class LightButton(Button):
    def render(self) -> None:
        print("Rendering Light Button [white background, dark text]")
