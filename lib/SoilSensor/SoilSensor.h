
class SoilSensor{

private:
    int pyn;
public:
    SoilSensor(int pyn);
    double getPercentHumidity();
    int getRealValue();
    double getPercentDry();
};