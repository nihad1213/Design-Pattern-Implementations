<?php

declare(strict_types=1);

require_once __DIR__ . '/LightThemeFactory.php';
require_once __DIR__ . '/DarkThemeFactory.php';

function renderUI(UIFactory $factory): void {
    $button = $factory->createButton();
    $checkbox = $factory->createCheckbox();

    $button->render();
    $checkbox->render();
}

echo "=== Light Theme ===\n";
renderUI(new LightThemeFactory());

echo "=== Dark Theme ===\n";
renderUI(new DarkThemeFactory());
