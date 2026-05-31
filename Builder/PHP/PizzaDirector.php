<?php

declare(strict_types=1);

require_once __DIR__ . '/PizzaBuilder.php';

class PizzaDirector {
    public function __construct(private PizzaBuilder $builder) {}

    public function setBuilder(PizzaBuilder $builder): void {
        $this->builder = $builder;
    }

    public function make(): Pizza {
        $this->builder->setCrust();
        $this->builder->setSauce();
        $this->builder->setCheese();
        $this->builder->addToppings();
        return $this->builder->build();
    }
}
