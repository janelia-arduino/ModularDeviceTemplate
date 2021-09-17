// ----------------------------------------------------------------------------
// ModularDeviceTemplate.cpp
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#include "../ModularDeviceTemplate.h"


using namespace modular_device_template;

ModularDeviceTemplate::ModularDeviceTemplate()
{
}

void ModularDeviceTemplate::setup()
{
  // Parent Setup
  Parent::setup();

  // Reset Watchdog
  resetWatchdog();

  // Variable Setup

  // Set Device ID
  modular_server_.setDeviceName(constants::device_name);

  // Add Hardware

  // Pins

  // Add Firmware
  modular_server_.addFirmware(constants::firmware_info,
    properties_,
    parameters_,
    functions_,
    callbacks_);

  // Properties

  // Parameters

  // Functions

  // Callbacks
}

