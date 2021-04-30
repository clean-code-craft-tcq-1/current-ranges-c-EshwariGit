#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"
#include "stdlib.h"
#include "math.h"

TEST_CASE("To check if the samples are in range") {
    int CurrentRange[] = {3, 3, 5, 4};
    int listofvalues = sizeof(CurrentRange) / sizeof(CurrentRange[0]);
    int BreachType[] ={3,5};
  REQUIRE(inferRange(listofvalues,CurrentRange,BreachType) == 3);
}

