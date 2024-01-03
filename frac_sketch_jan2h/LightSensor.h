#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include <Arduino.h>

// Déclaration des variables et constantes
int lightSensor = A3;
extern uint8_t ereurLum;

// Prototype de la fonction CLumiere
void CLumiere(int8_t n);

#endif
