#ifndef OFFICE_PC_BUILDER_H
#define OFFICE_PC_BUILDER_H

#include "ComputerBuilder.h"

class OfficePCBuilder : public ComputerBuilder {
private:
    Computer computer;

public:
    void setCPU() override { computer.cpu = "Intel Core i5-13400"; }
    void setRAM() override { computer.ram = "16GB DDR4"; }
    void setStorage() override { computer.storage = "512GB SSD"; }
    void setGPU() override { computer.gpu = "Intel UHD Graphics 730"; }
    void setOS() override { computer.os = "Ubuntu 24.04"; }

    Computer getResult() override { return computer; }
};

#endif
