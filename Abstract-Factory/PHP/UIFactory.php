<?php

declare(strict_types=1);

require_once __DIR__ . '/Button.php';
require_once __DIR__ . '/Checkbox.php';

interface UIFactory {
    public function createButton(): Button;
    public function createCheckbox(): Checkbox;
}
