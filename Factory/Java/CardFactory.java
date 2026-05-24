class CardFactory extends PaymentFactory {
    Payment createPayment() {
        return new CardPayment();
    }
}