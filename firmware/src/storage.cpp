#include "storage.h"

#include <SD.h>
#include "config.h"

String songs[100];

int amount=0;

int current=0;

void storageBegin()
{

SD.begin(SD_CS);

}

void scanMusic()
{


File root =

SD.open("/Music");

while(true)
{

File f =
root.openNextFile();

if(!f)
  break;

String name =
f.name();

if(name.endsWith(".mp3"))
{

songs[amount] =
  "/Music/" + name;

amount++;

}

f.close();

}

Serial.print("Songs: ");

Serial.println(amount);

}


String getCurrentSong()
{

return songs[current];

}

String getCurrentArt()
{

String a =
songs[current];

a.replace(
  ".mp3",
  ".bmp"
  );

return a;

}


int getSongs()
{

return amount;

}

void nextSong()
{

current++;

if(current>=amount)
  current=0;

}


void previousSong()
{

current--;

if(current<0)
  current=amount-1;

} 
