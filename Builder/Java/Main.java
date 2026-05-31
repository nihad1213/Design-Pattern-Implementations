public class Main {
    public static void main(String[] args) {
        ConstructionDirector director = new ConstructionDirector(new ModernHouseBuilder());

        System.out.println("=== Modern House ===");
        director.construct().describe();

        director.setBuilder(new CottageBuilder());

        System.out.println("\n=== Cottage ===");
        director.construct().describe();
    }
}
