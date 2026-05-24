abstract class PaymentFactory {
    abstract Payment createPayment();

    public void process(double amount) {
        Payment payment = createPayment();
        payment.pay(amount);
    }
}