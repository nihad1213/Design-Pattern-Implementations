#ifndef COMPUTER_BUILDER_H
#define COMPUTER_BUILDER_H

#include "Computer.h"

class ComputerBuilder {
public:
    virtual void setCPU() = 0;
    virtual void setRAM() = 0;
    virtual void setStorage() = 0;
    virtual void setGPU() = 0;
    virtual void setOS() = 0;
    virtual Computer getResult() = 0;
    virtual ~ComputerBuilder() {}
};

#endif
