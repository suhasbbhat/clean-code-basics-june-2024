#include "PS.h"
#include <iostream>

PS::PS(int x, IScanner* sAddress, IPrintableDevice* pAddress) : D(x), sObj(sAddress), pObj(pAddress) {
    std::cout << "PS Constructor" << std::endl;
}

PS::~PS() {
    std::cout << "PS destructor called " << std::endl;
}

void PS::print() {
    pObj->print();
}

void PS::scan() {
    sObj->scan();
}
