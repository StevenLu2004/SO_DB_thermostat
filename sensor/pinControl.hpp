/**
 * This header manages the interaction between the Arduino board and the module connected to the arduino pins.
 * Author: Tongyu "Steven" Lu <steven.lu@prismsus.org>
 */

#include <Arduino.h>

namespace PinControl
{
    int analogPin = A0;
    const int MAX_READING = 1023;
    float maxVoltage = 5.0;

    /**
     * Returns the pin voltage in volts, in range [0, 5V], not [0, 1024].
     */
    float getRawVoltage(void)
    {
        return (analogRead(analogPin) * maxVoltage) / MAX_READING;
    }
}
