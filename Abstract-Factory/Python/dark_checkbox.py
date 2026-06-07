from checkbox import Checkbox

class DarkCheckbox(Checkbox):
    def render(self) -> None:
        print("Rendering Dark Checkbox [dark fill, light border]")
