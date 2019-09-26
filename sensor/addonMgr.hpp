/**
 * This header manages calculations involving the processing of the raw voltage measurements.
 * Author: Tongyu "Steven" Lu <steven.lu@prismsus.org>
 */

#include <cmath>

namespace AddonMgr
{
    float R_0 = 10.0, V_0 = 5.0;

    /**
     * Returns the resistance in ohms for the raw voltage.
     * Formula: R = (V_0 - V) * R_0 / V
     * @param voltage the raw voltage, which should be less than or equal to V_0
     */
    float getResistance(float voltage)
    {
        return (V_0 - voltage) * R_0 / voltage;
    }
}
