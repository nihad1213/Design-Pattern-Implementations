<?php

declare(strict_types=1);

require_once __DIR__ . '/Checkbox.php';

class LightCheckbox implements Checkbox {
    public function render(): void {
        echo "Rendering Light Checkbox [white fill, dark border]\n";
    }
}
