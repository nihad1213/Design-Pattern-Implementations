class House {
    String foundation;
    String walls;
    String roof;
    int floors;
    boolean hasGarage;

    void describe() {
        System.out.println("House Details:");
        System.out.println("  Foundation: " + foundation);
        System.out.println("  Walls:      " + walls);
        System.out.println("  Roof:       " + roof);
        System.out.println("  Floors:     " + floors);
        System.out.println("  Garage:     " + (hasGarage ? "Yes" : "No"));
    }
}
