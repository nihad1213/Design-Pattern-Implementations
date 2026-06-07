<?php

declare(strict_types=1);

require_once __DIR__ . '/Button.php';

class LightButton implements Button {
    public function render(): void {
        echo "Rendering Light Button [white background, dark text]\n";
    }
}
