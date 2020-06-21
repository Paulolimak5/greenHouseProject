#include <dht.h>
class dht11
{
private:
    uint8_t pin;
    dht myDht;
public:
    dht11(uint8_t pin);
    double getHumidity();
    double getTemperature();
};

