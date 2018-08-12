// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace modular_device_template
{
namespace constants
{
CONSTANT_STRING(device_name,"modular_device_template");

CONSTANT_STRING(firmware_name,"ModularDeviceTemplate");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
{
  .name_ptr=&firmware_name,
  .version_major=1,
  .version_minor=0,
  .version_patch=0,
};

// Pins

// Units

// Properties

// Parameters

// Functions

// Callbacks

// Errors
}
}
