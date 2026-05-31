class CottageBuilder implements HouseBuilder {
    private House house = new House();

    public void buildFoundation() { house.foundation = "Stone"; }
    public void buildWalls() { house.walls = "Brick"; }
    public void buildRoof() { house.roof = "Gabled Roof"; }
    public void buildFloors() { house.floors = 1; }
    public void buildGarage() { house.hasGarage = false; }

    public House getResult() { return house; }
}
