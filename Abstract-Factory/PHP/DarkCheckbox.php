<?php

declare(strict_types=1);

require_once __DIR__ . '/Checkbox.php';

class DarkCheckbox implements Checkbox {
    public function render(): void {
        echo "Rendering Dark Checkbox [dark fill, light border]\n";
    }
}
