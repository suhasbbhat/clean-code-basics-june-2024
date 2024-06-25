#ifndef SLIDER_H
#define SLIDER_H

#include "Icon.h"

// Derived class Slider
class Slider : public Icon {
    bool vertical;
    int distance;

public:
    Slider() : Icon(IconType::Slider), vertical(false), distance(0) {}
    void move() override { /* Implementation for slide */ }
    void flair() override { /* Implementation for slide flair */ }
};

#endif // SLIDER_H
