from abc import ABC, abstractmethod
from car import Car

class CarBuilder(ABC):
    @abstractmethod
    def set_engine(self) -> None:
        pass

    @abstractmethod
    def set_color(self) -> None:
        pass

    @abstractmethod
    def set_seats(self) -> None:
        pass

    @abstractmethod
    def set_fuel(self) -> None:
        pass

    @abstractmethod
    def set_transmission(self) -> None:
        pass

    @abstractmethod
    def get_result(self) -> Car:
        pass
