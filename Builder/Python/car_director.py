from car_builder import CarBuilder

class CarDirector:
    def __init__(self, builder: CarBuilder):
        self.builder = builder

    def set_builder(self, builder: CarBuilder):
        self.builder = builder

    def build(self):
        self.builder.set_engine()
        self.builder.set_color()
        self.builder.set_seats()
        self.builder.set_fuel()
        self.builder.set_transmission()
        return self.builder.get_result()
