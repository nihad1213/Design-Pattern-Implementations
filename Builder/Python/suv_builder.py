from car_builder import CarBuilder
from car import Car

class SUVBuilder(CarBuilder):
    def __init__(self):
        self.car = Car()

    def set_engine(self):
        self.car.engine = "3.5L V6"

    def set_color(self):
        self.car.color = "Pearl White"

    def set_seats(self):
        self.car.seats = 7

    def set_fuel(self):
        self.car.fuel = "Hybrid"

    def set_transmission(self):
        self.car.transmission = "6-speed Manual"

    def get_result(self):
        return self.car
