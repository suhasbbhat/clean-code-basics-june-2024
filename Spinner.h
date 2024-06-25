#ifndef SPINNER_H
#define SPINNER_H

#include "Icon.h"

// Derived class Spinner
class Spinner : public Icon {
    bool clockwise;
    bool expand;

public:
    Spinner() : Icon(IconType::Spinner), clockwise(false), expand(false) {}
    void move() override { /* Implementation for spin */ }
    void flair() override { /* Implementation for spin flair */ }
};

#endif // SPINNER_H
