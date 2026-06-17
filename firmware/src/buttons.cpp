#include "buttons.h"

#include "config.h"

#include "audio.h"

#include "storage.h"

void buttonsBegin()
{

pinMode(
BUTTON_PLAY,
INPUT_PULLUP
);

pinMode(
BUTTON_NEXT, 
INPUT_PULLUP
);

pinMode(
BUTTON_PREV
INPUT_PULLIP
); 

}

void checkButtons()
{

if(
  digitalRead(BUTTON_PLAY)==LOW
  )
{

togglePause();

delay(300);

}

if(
  digitalRead(BUTTON_NEXT)==LOW
  )
{

nextSong();

playCurrentSong();

delay(300);

}

if(
  digitalRead(BUTTON_PREV)==LOW
  )
{

previousSong();

playCurrentSong();

delay(300); 

}


}
