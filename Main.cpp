#include "Spinner.h"
#include "Slider.h"
#include "Hopper.h"

int main() {
    // Example usage
    Spinner spinner;
    spinner.move();
    spinner.flair();

    Slider slider;
    slider.move();
    slider.flair();

    Hopper hopper;
    hopper.move();
    hopper.flair();

    return 0;
}
