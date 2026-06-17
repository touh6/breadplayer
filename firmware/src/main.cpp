#include <Arudino.h>

#include "storage.h"
#include "audio.h"
#include "display.h"
#include "buttons.h"
#include "battery.h"

void setup()
{

Serial.begin(
115200
);

storageBegin();

scanMusic();

displayBegin();

audioBegin();

buttonsBegin();

if(
  getSongs()>0
  )
{

playCurrentSong();

updateScreen(

getCurrentSong(),

getCurrentArt(),

batteryPercent(),

0

  );

}

void loop()
{

audioLoop();

checkButtons();

static unsigned long t=0;

if(
  millis()-t > 30000
  )
{

updateScreen(

getCurrentSong(),

getCurrentArt(),

batteryPercent(),

getElapsed()

);

t=millis();

}


}
