#pragma once 

#include <Arduino.h>

void audioBegin();

void playCurrentSong();

void audioLoop();

void togglePause();

int getElapsed();
