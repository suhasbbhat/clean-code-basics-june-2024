#include "D.h"

D::D(int x) : val(x) {
    std::cout << "D Constructor, val = " << val << std::endl;
}

D::~D() {
    std::cout << "D destructor called " << std::endl;
}

void D::printVal() {
    std::cout << "Val in D = " << val << std::endl;
}
