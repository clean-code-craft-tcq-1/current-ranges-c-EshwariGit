#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"

TEST_CASE("Pass Test case to check NULL values")
{
    
  REQUIRE(inferRange(NULL,1) == PASS);
 
   
}

