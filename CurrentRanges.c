#include "CurrentRanges.h"
#include <stdio.h>

BreachType inferRange(int *value, int range) {

  if((value ==  NULL ) && (range ==0 ) )
  {
    return exception;
  }
  else(( range < 10 ))
  {
    return PASS;
  }
  else (( range > 10 ))
  {
    return FAIL;
  }
    

}

// Print to console
