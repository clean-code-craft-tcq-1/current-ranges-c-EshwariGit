#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"
#include "stdlib.h"
#include "math.h"

TEST_CASE("Fail Test case to check NULL values")
{
    
  REQUIRE(inferRange(0,1) == PASS);
 
   
}
TEST_CASE("Fail Test case to check exception values")
{
    
  REQUIRE(inferRange(0,1) == PASS);
 
   
}
TEST_CASE("Pass Test case to check NULL values")
{
    
  REQUIRE(inferRange(0,8) == PASS);
 
   
}
TEST_CASE("fail Test case to check values")
{
    
  REQUIRE(inferRange(0,11) == FAIL);
 
   
}

