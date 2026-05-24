class PayPalFactory extends PaymentFactory {
    Payment createPayment() {
        return new PayPalPayment();
    }
}