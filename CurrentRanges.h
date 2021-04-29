#pragma once



typedef enum {
  NORMAL,
  TOO_LOW,
  TOO_HIGH
} BreachType;

typedef struct {
	double lowerLimit;
	double upperLimit;
}BreachLimit;




typedef enum{
	FAIL,
	PASS
} InfoType;
InfoType checkAndAlert(
  AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC);
BreachType inferRange(double value, double lowerLimit, double upperLimit);

