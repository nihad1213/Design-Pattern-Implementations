from checkbox import Checkbox

class LightCheckbox(Checkbox):
    def render(self) -> None:
        print("Rendering Light Checkbox [white fill, dark border]")
