#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

class Computer {
public:
    std::string cpu;
    std::string ram;
    std::string storage;
    std::string gpu;
    std::string os;

    void showSpecs() const {
        std::cout << "Computer Specs:\n";
        std::cout << "  CPU:     " << cpu << "\n";
        std::cout << "  RAM:     " << ram << "\n";
        std::cout << "  Storage: " << storage << "\n";
        std::cout << "  GPU:     " << gpu << "\n";
        std::cout << "  OS:      " << os << "\n";
    }
};

#endif
