//Initialization
//  - Create a DigitalOut object for the LED.
//  - Initialize variables.
//
//Handlers
//  - Toggle the LED and update the measurements.
//  - Raise a flag that indicates that the measurements need to be read and displayed again.
//
//Main function
//  - Check if the flag is high.
//  - Read from the sensors.
//  - Convert the temperature into Fahrenheit and Kelvins.
//  - Enter sleep mode and wait for interrupts.
#include <mbed.h>
#include "envSensorApp.h"

int main(){
    // initialise sensors
    envSensorApp test_app(LED1);
    // setup timed event to raise flag when new data is needed
    test_app.init();
    while(1){
        test_app.
    }

}