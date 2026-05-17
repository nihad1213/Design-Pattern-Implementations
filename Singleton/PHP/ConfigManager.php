<?php

class ConfigManager
{
    private static ?ConfigManager $instance = null;

    private array $config = [];

    private function __construct()
    {
        // load config once
        $this->config = require __DIR__ . '/config.php';
    }

    public static function getInstance(): ConfigManager
    {
        if (self::$instance === null) {
            self::$instance = new ConfigManager();
        }

        return self::$instance;
    }

    public function getConfig(): array
    {
        return $this->config;
    }
}