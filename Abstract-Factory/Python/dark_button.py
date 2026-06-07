from button import Button

class DarkButton(Button):
    def render(self) -> None:
        print("Rendering Dark Button [dark background, white text]")
