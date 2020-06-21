#include <Arduino.h>
class plantStats{

    private:
        int dirtHumidity;
        double airHumidity;
        double airTemperature;
        String plantType;
        String greenHouseName;
        long time;
        bool hasWater;

    public:
        plantStats(/* args */);
        int getDirtHumidity();
        double getAirHumidity();
        double getAirTemperature();
        String getPlantType();
        String getGreenHouseName();
        long getTime();
        bool getHasWater();
        void setDirtHumidity(int dirtHumidity);
        void setAirHumidity(double airHumidity);
        void setAirTemperature(double airTemperature);
        void setPlantType(String plantType);
        void setGreenHouseName(String greenHouseName);
        void setTime(long time);
        void setHasWater(bool hasWater);
};



