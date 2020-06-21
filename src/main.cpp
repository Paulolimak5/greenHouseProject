#include <ArduinoJson.h>
#include <SD.h>
#include <SPI.h>
#include "plantStats.h"
#include "config.h"
const size_t capacity = JSON_OBJECT_SIZE(7) + 220;
DynamicJsonDocument doc(capacity);
const String configFile = "/config.json";

void JsonPlantConstruct(plantStats stats){
  doc["time"] = stats.getTime();
  doc["dirtHumidity"] = stats.getDirtHumidity();
  doc["airHumidity"] = stats.getAirHumidity();
  doc["airTemperature"] = stats.getAirTemperature();
  doc["plantType"] = stats.getPlantType();
  doc["greenHouseName"] = stats.getGreenHouseName();
  doc["hasWater"] = stats.getHasWater();
  serializeJson(doc, Serial);
}

void setup() {

}

void loop() {
  // nothing happens after setup
}

