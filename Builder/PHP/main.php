<?php

declare(strict_types=1);

require_once __DIR__ . '/MargheritaBuilder.php';
require_once __DIR__ . '/BBQChickenBuilder.php';
require_once __DIR__ . '/PizzaDirector.php';

$director = new PizzaDirector(new MargheritaBuilder());

echo "=== Margherita ===\n";
$director->make()->describe();

$director->setBuilder(new BBQChickenBuilder());

echo "\n=== BBQ Chicken ===\n";
$director->make()->describe();
