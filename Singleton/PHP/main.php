<?php

require_once "ConfigManager.php";

/**
 * Singleton pattern ensures that a class has only
 * one instance and provides a global point of access to it.
 */

$configManager1 = ConfigManager::getInstance();
$configManager2 = ConfigManager::getInstance();

if ($configManager1 === $configManager2) {
    echo "Both instances are the same.\n";
} else {
    echo "Instances are different.\n";
}

$config = $configManager1->getConfig();
print_r($config);

