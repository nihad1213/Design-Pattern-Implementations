public class Main {
    public static void main(String[] args) {
        PaymentFactory factory = new CardFactory();
        factory.process(100.0);

        factory = new PayPalFactory();
        factory.process(250.0);
    }
}