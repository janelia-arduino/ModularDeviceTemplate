// ----------------------------------------------------------------------------
// ModularDeviceTemplate.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef MODULAR_DEVICE_TEMPLATE_H
#define MODULAR_DEVICE_TEMPLATE_H
#include <Flash.h>
#include <EEPROM.h>
#include <Streaming.h>
#include <ArduinoJson.h>
#include <JsonSanitizer.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <MemoryFree.h>
#include <ConstantVariable.h>
#include <SavedVariable.h>
#include <Functor.h>
#include <IndexedContainer.h>
#include <FunctorCallbacks.h>
#include <Watchdog.h>

#include <ModularClient.h>

#include <ModularServer.h>
#include <ModularDeviceBase.h>
#include <Parent.h>

#include "ModularDeviceTemplate/Constants.h"


class ModularDeviceTemplate : public Parent
{
public:
  ModularDeviceTemplate();
  virtual void setup();

private:
  modular_server::Property properties_[modular_device_template::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[modular_device_template::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[modular_device_template::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[modular_device_template::constants::CALLBACK_COUNT_MAX];

  // Handlers

};

#endif
