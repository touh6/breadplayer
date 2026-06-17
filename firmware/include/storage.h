#pragma once

#include <Arduino.h>

void storageBegin();

void scanMusic();

String getCurrentSong();

String getCurrentArt();

int getSongs();

void nextSong();

void previousSong();

