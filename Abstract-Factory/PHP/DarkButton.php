<?php

declare(strict_types=1);

require_once __DIR__ . '/Button.php';

class DarkButton implements Button {
    public function render(): void {
        echo "Rendering Dark Button [dark background, white text]\n";
    }
}
