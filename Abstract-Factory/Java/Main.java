public class Main {
    static void renderUI(UIFactory factory) {
        Button button = factory.createButton();
        Checkbox checkbox = factory.createCheckbox();

        button.render();
        checkbox.render();
    }

    public static void main(String[] args) {
        System.out.println("=== Light Theme ===");
        renderUI(new LightThemeFactory());

        System.out.println("=== Dark Theme ===");
        renderUI(new DarkThemeFactory());
    }
}
