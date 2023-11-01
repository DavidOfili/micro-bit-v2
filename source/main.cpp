// Include the MicroBit header file (preprocessor directive) 
#include "MicroBit.h"

// MicroBit control object
MicroBit uBit;

// Main function
int main()
{
    //  Initialise the uBit object
    uBit.init();

    // Display some text on the led lights
    uBit.display.scroll("HELLO WORLD!");

    // Release the main fiber and enter the scheduler indefinitely
    release_fiber();
}