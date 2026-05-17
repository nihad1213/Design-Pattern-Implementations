#include "Logger.h"

/**
 * This main function demonstrates the usage of the Singleton Logger class. 
 * It retrieves two instances of the Logger and logs messages to confirm that 
 * both instances point to the same object,ensuring that only one instance of 
 * the Logger exists throughout the application.
 */
int main() {

    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    logger1->log("First message");
    logger2->log("Second message");

    if (logger1 == logger2) {
        logger1->log("Same instance confirmed!");
    }

    return 0;
}