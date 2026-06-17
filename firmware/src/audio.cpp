#include "audio.h"

#include "storage.h"
#include "config.h"

#include <AudioFileSourceSD.h>
#include <AudioGeneratorMP3.h> 
#include <AudioOutputI2S.h>

AudioGeneratorMP3 *decoder;

AudioFileSourceSD *source; 

AudioOutputI2S *output; 

bool paused=false;

unsigned long startTime;

void audioBegin()
{


  output =
  new AudioOutputI2S();

output->SetPinout(
I2S_BCLK,
I2S_LRCK,
I2S_DATA
  );


output->SetGain(
  0.8
  );


decoder =
  new AudioGeneratorMP3();

Serial.println(
  "Audio ready"
  );

}


void playCurrentSong()
{


  if(decoder->isRunning())
{

decoder->stop();

}

source = 
  new AudioFileSourceSD(
  getCurrentSong().c_str()
  );

decoder->begin(
  source,
  output
  );

paused=false;

startTime =
  millis();

Serial.print(
  "Playing "
  );

Serial.println(
  getCurrentSong()
  );

}

void audioLoop()
{
  if(
    decoder &&
    decoder->isRunning()
    &&
    !paused 
    )
{

decoder->loop();

}

}

// is soup going to beat us up


void togglePause()
{

  paused =
!paused;

}

int getElapsed()
{

  return
    (millis()-startTime)/1000;

}



