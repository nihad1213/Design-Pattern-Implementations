from car_builder import CarBuilder
from car import Car

class SportsCarBuilder(CarBuilder):
    def __init__(self):
        self.car = Car()

    def set_engine(self):
        self.car.engine = "4.0L V8 Turbo"

    def set_color(self):
        self.car.color = "Matte Black"

    def set_seats(self):
        self.car.seats = 2

    def set_fuel(self):
        self.car.fuel = "Petrol"

    def set_transmission(self):
        self.car.transmission = "7-speed Automatic"

    def get_result(self):
        return self.car
