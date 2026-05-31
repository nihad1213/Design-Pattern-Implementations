#ifndef PC_DIRECTOR_H
#define PC_DIRECTOR_H

#include "ComputerBuilder.h"

class PCDirector {
private:
    ComputerBuilder* builder;

public:
    PCDirector(ComputerBuilder* builder) : builder(builder) {}

    void setBuilder(ComputerBuilder* b) { builder = b; }

    Computer build() {
        builder->setCPU();
        builder->setRAM();
        builder->setStorage();
        builder->setGPU();
        builder->setOS();
        return builder->getResult();
    }
};

#endif
