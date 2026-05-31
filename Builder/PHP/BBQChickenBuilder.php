<?php

declare(strict_types=1);

require_once __DIR__ . '/PizzaBuilder.php';

class BBQChickenBuilder implements PizzaBuilder {
    private string $crust;
    private string $sauce;
    private string $cheese;
    private array $toppings = [];

    public function setCrust(): void {
        $this->crust = 'Thick';
    }

    public function setSauce(): void {
        $this->sauce = 'BBQ';
    }

    public function setCheese(): void {
        $this->cheese = 'Cheddar';
    }

    public function addToppings(): void {
        $this->toppings = ['Grilled Chicken', 'Red Onion', 'Jalapenos'];
    }

    public function build(): Pizza {
        return new Pizza($this->crust, $this->sauce, $this->cheese, $this->toppings);
    }
}
