#ifndef SDCARDMANAGER_H
#define SDCARDMANAGER_H

#include <Arduino.h>
#include <SD.h>

// Déclaration des variables et constantes
extern const byte PROGMEM chipSelect;
extern File fichier;
extern uint16_t FILE_MAX_SIZE;
const byte PROGMEM chipSelect = 4;
File fichier;

// Prototypes des fonctions
void printSD();

#endif
