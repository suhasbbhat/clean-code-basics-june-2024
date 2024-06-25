#ifndef ICON_H
#define ICON_H

#include <iostream>

// Define an enum for Icon types
enum class IconType { Spinner, Slider, Hopper };

// Base class Icon
class Icon {
protected:
    float speed, glow, energy;
    int x, y;
    IconType type;

public:
    Icon(IconType type) : type(type), speed(0), glow(0), energy(0), x(0), y(0) {}
    virtual ~Icon() = default; // Virtual destructor
    virtual void move() = 0;
    virtual void flair() = 0;
};

#endif // ICON_H
