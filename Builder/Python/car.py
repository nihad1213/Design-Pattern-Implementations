class Car:
    def __init__(self):
        self.engine = ""
        self.color = ""
        self.seats = 0
        self.fuel = ""
        self.transmission = ""

    def describe(self):
        print("Car Specs:")
        print(f"  Engine:       {self.engine}")
        print(f"  Color:        {self.color}")
        print(f"  Seats:        {self.seats}")
        print(f"  Fuel:         {self.fuel}")
        print(f"  Transmission: {self.transmission}")
