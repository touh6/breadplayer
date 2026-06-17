#pragma once 

#include <Arduino.h>

void displayBegin();

void updateScreen(
String title, 
String art, 
int battery, 
int seconds
);
