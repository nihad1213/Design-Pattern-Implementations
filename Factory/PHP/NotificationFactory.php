<?php

declare(strict_types=1);

require_once __DIR__ . '/Notification.php';

abstract class NotificationFactory {
    abstract public function createNotification(): Notification;

    public function notify(string $message): void {
        $notification = $this->createNotification();
        $notification->send($message);
    }
}