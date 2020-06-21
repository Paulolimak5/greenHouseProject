#include "plantStats.h"
#include <Arduino.h>
plantStats::plantStats(/* args */){}
int plantStats::getDirtHumidity(){return this->dirtHumidity;}
double plantStats::getAirHumidity(){return this->airHumidity;}
double plantStats::getAirTemperature(){return this->airTemperature;}
String plantStats::getPlantType(){return this->plantType;}
String plantStats::getGreenHouseName(){return this->greenHouseName;}
long plantStats::getTime(){return this->time;}
bool plantStats::getHasWater(){return this->hasWater;}
void plantStats::setDirtHumidity(int dirtHumidity){this->dirtHumidity = dirtHumidity;}
void plantStats::setAirHumidity(double airHumidity){this->airHumidity = airHumidity;}
void plantStats::setAirTemperature(double airTemperature){this->airTemperature = airTemperature;}
void plantStats::setPlantType(String plantType){this->plantType = plantType;}
void plantStats::setGreenHouseName(String greenHouseName){this->greenHouseName = greenHouseName;}
void plantStats::setTime(long time){this->time = time;}
void plantStats::setHasWater(bool hasWater){this->hasWater = hasWater;}
