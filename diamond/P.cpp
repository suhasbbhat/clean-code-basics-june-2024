#include "P.h"
#include <iostream>

P::P() : D(1) {
    std::cout << "P Constructor" << std::endl;
}

P::~P() {
    std::cout << "P destructor called " << std::endl;
}

void P::print() {
    std::cout << "Printing..." << std::endl;
}
