#include <ModularDeviceTemplate.h>


ModularDeviceTemplate dev;

void setup()
{
  dev.setup();
  dev.startServer();
}

void loop()
{
  dev.update();
}
