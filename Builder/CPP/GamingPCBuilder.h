#ifndef GAMING_PC_BUILDER_H
#define GAMING_PC_BUILDER_H

#include "ComputerBuilder.h"

class GamingPCBuilder : public ComputerBuilder {
private:
    Computer computer;

public:
    void setCPU() override { computer.cpu = "Intel Core i9-14900K"; }
    void setRAM() override { computer.ram = "32GB DDR5"; }
    void setStorage() override { computer.storage = "2TB NVMe SSD"; }
    void setGPU() override { computer.gpu = "NVIDIA RTX 4090"; }
    void setOS() override { computer.os = "Windows 11"; }

    Computer getResult() override { return computer; }
};

#endif
