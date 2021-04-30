#pragma once

typedef enum {
  exception,
  FAIL,
  PASS
} BreachType;


BreachType inferRange(int listofvalues,int *CurrentRange,int *BreachType);


