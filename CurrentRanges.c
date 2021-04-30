#include "CurrentRanges.h"
#include <stdio.h>

BreachType inferRange(int *value, int range) {

  if((value ==  NULL ) && (range ==0 ) )
  {
    return exception;
  }
  else if (( range < 10 ))
  {
    return PASS;
  }
  else if (( range > 10 ))
  {
    return FAIL;
  }
  
  
  // Add Range calculation func

}

// Print to console
