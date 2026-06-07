<?php

declare(strict_types=1);

require_once __DIR__ . '/UIFactory.php';
require_once __DIR__ . '/LightButton.php';
require_once __DIR__ . '/LightCheckbox.php';

class LightThemeFactory implements UIFactory {
    public function createButton(): Button {
        return new LightButton();
    }

    public function createCheckbox(): Checkbox {
        return new LightCheckbox();
    }
}
