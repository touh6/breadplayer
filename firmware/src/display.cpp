#include "display.h"

#include "config.h"

#include <GxEPD2_BW.h> 
#include <SD.h>

GxEPD2_BW<
GxEPD2_420,
GxEPD2_420::HEIGHT
>
screen(
GxEPD2_420(
EPD_CS,
EPD_DC,
EPD_RST,
EPD_BUSY
)
);


void displayBegin()
{
  screen.init();

screen.setRotation(1);

screen.setTextColor(
  GxEPD_BLACK
  );

}

void drawBMP(String file)
{

if(!SD.exists(file))
  return;


File img =
SD.open(file); 

if(!img)
  return;

// album art placeholder area
// image file exists check 

screen.drawRect(
 10,
 10,
 100,
 100,
 GxEPD_BLACK
 );

img.close();

}

void updateScreen(
String title,
String art, 
int battery, 
int seconds
)
{

  screen.firstPage();

do
{

screen.fillScreen(
GxEPD_WHITE
  );

drawBMP(art);


screen.setCursor(
  125,
  40
  );

screen.setTextSize(2);


screen.println(
  title
  );

screen.setTextSize(1);

screen.setCursor(
  10,
  140
  );

screen.drawRect(
  10,
  150,
  350,
  15,
  GxEPD_BLACK
  );

int bar =
(seconds % 180) * 340 / 180;

screen.fillRect(
  12,
  152,
  bar,
  11,
  GxEPD_BLACK
  );

screen.setCursor(
  10,
  200,
  );

screen.print(
  "Battery "
  );

screen.print(
  battery
  );

screen.println("%");

}
  while(
  screen.nextPage()
  );

}
