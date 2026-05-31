from sports_car_builder import SportsCarBuilder
from suv_builder import SUVBuilder
from car_director import CarDirector

director = CarDirector(SportsCarBuilder())

print("=== Sports Car ===")
director.build().describe()

director.set_builder(SUVBuilder())

print("\n=== SUV ===")
director.build().describe()
