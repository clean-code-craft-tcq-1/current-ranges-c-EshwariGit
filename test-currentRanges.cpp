#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"
#include "stdlib.h"
#include "math.h"
// Number of reading betweem 3 to 5 is 4 so testcase shall pass if this is in permitted range

//PASSING TESTCASE
TEST_CASE("To check if the samples are in range") {
    int CurrentRange[] = {3, 3, 5, 4};
    int listofvalues = sizeof(CurrentRange) / sizeof(CurrentRange[0]);
    int BreachType[] ={3,5};
  REQUIRE(inferRange(listofvalues,CurrentRange,BreachType) == 4);
}

/* FAILING TESTCASE
TEST_CASE("To check if the samples are out range") {
    int CurrentRange[] = {3, 3, 5, 4};
    int listofvalues = sizeof(CurrentRange) / sizeof(CurrentRange[0]);
    int BreachType[] ={3,5};
  REQUIRE(inferRange(listofvalues,CurrentRange,BreachType) == 7);
}

/*
