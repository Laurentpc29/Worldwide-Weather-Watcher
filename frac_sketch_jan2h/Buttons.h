#ifndef BUTTONS_H
#define BUTTONS_H

#include <Arduino.h>

// Déclaration des variables et constantes des boutons
const byte PROGMEM redBtn = 3;
const byte PROGMEM greenBtn = 2;

volatile bool redBtnState = false;
unsigned int redBtnTime = 0;

volatile bool greenBtnState = false;
unsigned int greenBtnTime = 0;

// Prototypes des fonctions
void buttonRedInterrupt();
void buttonGreenInterrupt();

#endif
