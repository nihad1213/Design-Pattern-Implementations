<?php

declare(strict_types=1);

class SMSFactory extends NotificationFactory {
    public function createNotification(): Notification {
        return new SMSNotification();
    }
}