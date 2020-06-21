#include "SoilSensor.h"
#include <Arduino.h>
#define MAX 1023.00
SoilSensor::SoilSensor(int pyn){
    this->pyn = pyn;
}

double SoilSensor::getPercentHumidity(){
    
    double dataRead = analogRead(this->pyn);
    return (((MAX - dataRead)/MAX) * 100);
}

int SoilSensor::getRealValue(){
    return analogRead(this->pyn);
}

double SoilSensor::getPercentDry(){
    
    double dataRead = analogRead(this->pyn);
    return ((dataRead/MAX) * 100);
}
