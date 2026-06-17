#include "battery.h"

#include "config.h"

int batteryPercent()
{

int value =
analogRead(
BATTERY_PIN
);

float voltage =
value * 3.3/ 4095 * 2;


int percent =
map(
voltage*100,
330,
420, 
0, 
100
);

return constrain(
  percent, 
  0, 
  100
  );

}
