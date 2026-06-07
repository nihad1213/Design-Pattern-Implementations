<?php

declare(strict_types=1);

require_once __DIR__ . '/UIFactory.php';
require_once __DIR__ . '/DarkButton.php';
require_once __DIR__ . '/DarkCheckbox.php';

class DarkThemeFactory implements UIFactory {
    public function createButton(): Button {
        return new DarkButton();
    }

    public function createCheckbox(): Checkbox {
        return new DarkCheckbox();
    }
}
