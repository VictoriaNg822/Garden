// Example usage for cactus library by victoria.

#include "cactus.h"

// Initialize objects from the lib
Cactus cactus;

void setup() {
    // Call functions on initialized library objects that require hardware
    cactus.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    cactus.process();
}
