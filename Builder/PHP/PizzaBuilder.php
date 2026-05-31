<?php

declare(strict_types=1);

require_once __DIR__ . '/Pizza.php';

interface PizzaBuilder {
    public function setCrust(): void;
    public function setSauce(): void;
    public function setCheese(): void;
    public function addToppings(): void;
    public function build(): Pizza;
}
