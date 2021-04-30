#pragma once

typedef enum {
  exception,
  FAIL,
  PASS
} BreachType;


int inferRange(int listofvalues,int *CurrentRange,int *BreachType);


