#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"

TEST_CASE("infers the ranges according to limits -passing testcase") {
  REQUIRE(inferRange(12, 20, 30) == TOO_LOW);
}
TEST_CASE("infers the ranges according to not in limits -failing testcase") {
  REQUIRE(inferRange(12, 25, 47) == TOO_LOW);
  
}




