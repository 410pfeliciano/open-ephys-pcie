#include <assert.h>

#include "oepcie.h"
#include "oedevices.h"

const char *oe_device_str(int dev_id)
{
    switch (dev_id) {
        case OE_INFO: {
            return "Host status and error information.";
        }
        case OE_RHD2132: {
            return "Intan RHD2132 bioamplifier";
        }
        case OE_RHD2164: {
            return "Intan RHD2164 bioamplifier";
        }
        case OE_MPU9250: {
            return "MPU9250 9-axis IMU";
        }
        case OE_ESTIM: {
            return "Electrical stimulation subcircuit";
        }
        case OE_OSTIM: {
            return "Optical stimulation subcircuit";
        }
        case OE_TS4231: {
            return "Triad TS4231 optical to digital converter";
        }
        case OE_SERDESGPO: {
            return "GPO pins available on the DS90UB913A-Q1 serializer";
        }
        case OE_DINPUT32: {
            return "32-bit digital input port";
        }
        case OE_DOUTPUT32: {
            return "32-bit digital output port";
        }
        default:
            return "Unknown device";
    }
}
