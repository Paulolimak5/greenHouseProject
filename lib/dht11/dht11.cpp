#include "dht11.h"
dht11::dht11(uint8_t pin){
    this->pin = pin;
    
}
double dht11::getHumidity(){
    this->myDht.read11(this->pin);
    return myDht.humidity;
}

double dht11::getTemperature(){
    this->myDht.read11(this->pin);
    return myDht.temperature;
}