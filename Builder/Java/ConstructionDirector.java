class ConstructionDirector {
    private HouseBuilder builder;

    ConstructionDirector(HouseBuilder builder) {
        this.builder = builder;
    }

    void setBuilder(HouseBuilder builder) {
        this.builder = builder;
    }

    House construct() {
        builder.buildFoundation();
        builder.buildWalls();
        builder.buildRoof();
        builder.buildFloors();
        builder.buildGarage();
        return builder.getResult();
    }
}
