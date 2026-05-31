<?php

declare(strict_types=1);

class Pizza {
    public function __construct(
        private string $crust,
        private string $sauce,
        private string $cheese,
        private array $toppings
    ) {}

    public function describe(): void {
        $toppings = implode(', ', $this->toppings);
        echo "Pizza [\n";
        echo "Crust: {$this->crust}\n";
        echo "Sauce: {$this->sauce}\n";
        echo "Cheese: {$this->cheese}\n";
        echo "Toppings: {$toppings}\n";
        echo "]\n";
    }
}
