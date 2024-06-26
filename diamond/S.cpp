#include "S.h"
#include <iostream>

S::S() : D(2) {
    std::cout << "S Constructor" << std::endl;
}

S::~S() {
    std::cout << "S destructor called " << std::endl;
}

void S::scan() {
    std::cout << "Scanning..." << std::endl;
}
