#ifndef BME280SENSOR_H
#define BME280SENSOR_H

#include <Arduino.h>
#include <BME280I2C.h>

// Déclaration des variables et constantes
BME280I2C bme;

extern float temp, hum, pres;
extern int8_t MIN_TEMP_AIR, MAX_TEMP_AIR, HYGR_MINT, HYGR_MAXT;
extern int PRESSURE_MIN, PRESSURE_MAX;
extern uint8_t ereurtemp, ereurhum, ereurpres;

// Prototypes des fonctions
void BMETemp(Stream* client, int8_t n);
void BMEhum(Stream* client, int8_t n);
void BMEpres(Stream* client, int8_t n);

#endif
