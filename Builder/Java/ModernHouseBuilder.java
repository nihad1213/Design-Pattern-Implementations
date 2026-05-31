class ModernHouseBuilder implements HouseBuilder {
    private House house = new House();

    public void buildFoundation() { house.foundation = "Concrete Slab"; }
    public void buildWalls() { house.walls = "Glass and Steel"; }
    public void buildRoof() { house.roof = "Flat Roof"; }
    public void buildFloors() { house.floors = 2; }
    public void buildGarage() { house.hasGarage = true; }

    public House getResult() { return house; }
}
