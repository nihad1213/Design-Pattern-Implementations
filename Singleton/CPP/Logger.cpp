#include "Logger.h"
#include <iostream>

Logger* Logger::instance = nullptr;

Logger::Logger() {
    std::cout << "Logger initialized\n";
}

Logger* Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}

void Logger::log(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}