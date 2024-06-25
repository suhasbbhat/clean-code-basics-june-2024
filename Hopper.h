#ifndef HOPPER_H
#define HOPPER_H

#include "Icon.h"

// Derived class Hopper
class Hopper : public Icon {
    bool visible;
    int xcoord, ycoord;

public:
    Hopper() : Icon(IconType::Hopper), visible(false), xcoord(0), ycoord(0) {}
    void move() override { /* Implementation for hop */ }
    void flair() override { /* Implementation for hop flair */ }
};

#endif // HOPPER_H
