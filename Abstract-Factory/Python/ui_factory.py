from abc import ABC, abstractmethod
from button import Button
from checkbox import Checkbox

class UIFactory(ABC):
    @abstractmethod
    def create_button(self) -> Button:
        pass

    @abstractmethod
    def create_checkbox(self) -> Checkbox:
        pass
