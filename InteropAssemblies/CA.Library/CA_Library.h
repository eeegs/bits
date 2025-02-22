//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------

#ifndef CA_LIBRARY_H
#define CA_LIBRARY_H

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <nanoPackStruct.h>
#include "/sources/esp-idf/components/esp_adc/include/esp_adc/adc_monitor.h"

struct CA_Library_ACDMonitor
{
    static const int FIELD_STATIC__locker = 0;
    static const int FIELD_STATIC__monitor1 = 1;
    static const int FIELD_STATIC__monitor2 = 2;

    static const int FIELD__adcChannel = 1;

    static adc_continuous_handle_t handle;
    static adc_monitor_handle_t monitor_handle;

    NANOCLR_NATIVE_DECLARE(SetupMonitor);
    NANOCLR_NATIVE_DECLARE(DisposeMonitor);

    //--//
};

struct CA_Library_DirectGPIO
{
    NANOCLR_NATIVE_DECLARE(Read);
    NANOCLR_NATIVE_DECLARE(Write);
    NANOCLR_NATIVE_DECLARE(SetMode);

    //--//
};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_CA_Library;

#endif // CA_LIBRARY_H
