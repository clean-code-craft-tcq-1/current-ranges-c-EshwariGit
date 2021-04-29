#pragma once



typedef enum {
  exception,
  FAIL,
  PASS,
INVALID
} BreachType;


BreachType inferRange(int *value, int range);


