#include "GamingPCBuilder.h"
#include "OfficePCBuilder.h"
#include "PCDirector.h"

int main() {
    GamingPCBuilder gaming;
    PCDirector director(&gaming);

    std::cout << "=== Gaming PC ===\n";
    director.build().showSpecs();

    OfficePCBuilder office;
    director.setBuilder(&office);

    std::cout << "\n=== Office PC ===\n";
    director.build().showSpecs();

    return 0;
}
