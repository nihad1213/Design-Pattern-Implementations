<?php

declare(strict_types=1);

require_once __DIR__ . '/Notification.php';

class EmailNotification implements Notification {
    public function send(string $message): void {
        echo "Sending EMAIL: $message\n";
    }
}