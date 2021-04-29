#include "CurrentRanges.h"
#include <stdio.h>

BreachType inferRange(double value, double lowerLimit, double upperLimit) {
  if(value < lowerLimit) {
    return TOO_LOW;
  }
  if(value > upperLimit) {
    return TOO_HIGH;
  }
  return NORMAL;
}

BreachLimit classifyTemperatureBreach[3] = {{0,35}, {0,45}, {0,40}};

InfoType(*Alert[])(BreachType) = {sendToController, sendToEmail,sendToConsole};
InfoType checkAndAlert(AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC) {
  InfoType Value = FAIL;
  BreachType breachType = inferBreach(classifyTemperatureBreach[batteryChar.coolingType].lowerLimit,  classifyTemperatureBreach[batteryChar.coolingType].upperLimit, temperatureInC);
  Value = Alert[alertTarget](breachType);
  return Value;

}

// Print to console
