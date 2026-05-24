<?php

declare(strict_types=1);

require_once __DIR__ . '/NotificationFactory.php';
require_once __DIR__ . '/EmailNotification.php';

class EmailFactory extends NotificationFactory {
    public function createNotification(): Notification {
        return new EmailNotification();
    }
}