<?php

declare(strict_types=1);

require_once __DIR__ . '/PizzaBuilder.php';

class MargheritaBuilder implements PizzaBuilder {
    private string $crust;
    private string $sauce;
    private string $cheese;
    private array $toppings = [];

    public function setCrust(): void {
        $this->crust = 'Thin';
    }

    public function setSauce(): void {
        $this->sauce = 'Tomato';
    }

    public function setCheese(): void {
        $this->cheese = 'Mozzarella';
    }

    public function addToppings(): void {
        $this->toppings = ['Fresh Basil', 'Olive Oil'];
    }

    public function build(): Pizza {
        return new Pizza($this->crust, $this->sauce, $this->cheese, $this->toppings);
    }
}
