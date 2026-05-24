<?php

declare(strict_types= 1);

require_once __DIR__ . '/EmailFactory.php';
require_once __DIR__ . '/SMSFactory.php';

$factory = new EmailFactory();
$factory->notify("Hello via Email!");

$factory = new EmailFactory();
$factory->notify("Hello SMS!");