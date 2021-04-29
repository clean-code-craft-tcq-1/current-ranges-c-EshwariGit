#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentRanges.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
}

TEST_CASE("infers the breach according which is too high") {
  REQUIRE(inferBreach(32, 20, 30) == TOO_HIGH);
}

TEST_CASE("infers the breach according which is too normal") {
  REQUIRE(inferBreach(30, 20, 30) == NORMAL);
}

TEST_CASE("Infers If Email Sending Working -CASE1") {
  BatteryCharacter batterychar = {HI_ACTIVE_COOLING, "NORMAL"};
  REQUIRE(checkAndAlert(TO_EMAIL, batterychar,30 ) == PASS);
}


TEST_CASE("Infers If Email Sending Working -CASE2") {
  BatteryCharacter batterychar = {HI_ACTIVE_COOLING, "HIGH"};
  REQUIRE(checkAndAlert(TO_EMAIL, batterychar, 60 ) == PASS);
}

TEST_CASE("Infers If Email Sending Working -CASE3") {
  BatteryCharacter batterychar = {HI_ACTIVE_COOLING, "LOW"};
  REQUIRE(checkAndAlert(TO_EMAIL, batterychar, -4 ) == PASS);
}
TEST_CASE("Infers If Sending to Console is Working -CASE1") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(checkAndAlert(TO_CONSOLE, batterychar, 30 ) == PASS);
}

TEST_CASE("Infers If Sending to Console is Working -CASE2") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(checkAndAlert(TO_CONSOLE, batterychar, 15 ) == PASS);
}

TEST_CASE("Infers If Sending to Controller is Working -CASE1") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(checkAndAlert(TO_CONTROLLER, batterychar, -50 ) == PASS);
}

TEST_CASE("Infers If Sending to Controller is Working -CASE2") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(checkAndAlert(TO_CONTROLLER, batterychar, 60) == PASS);
}

TEST_CASE("When breach infered is NORMALcheck if ALERT is triggered")
{
  REQUIRE(sendToConsole(NORMAL) == PASS);	
  REQUIRE(sendToEmail(NORMAL) == PASS);
}
// Addtion of testcases to assert for confidence
TEST_CASE("When breach inferred is HIGH check if ALERT is triggered")
{
  REQUIRE(sendToConsole(TOO_HIGH) == PASS);	
  REQUIRE(sendToEmail(TOO_HIGH) == PASS);
}
TEST_CASE("When breach inferred is LOW check if ALERT is triggered")
{
  REQUIRE(sendToConsole(TOO_LOW) == PASS);	
  REQUIRE(sendToEmail(TOO_LOW) == PASS);
}

TEST_CASE("Infers If Sending to Controller and email is Working -CASE2") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(sendToConsole(TOO_LOW) == PASS);
  REQUIRE(sendToEmail(TOO_LOW) == PASS);
}

TEST_CASE("Infers If Sending to Controller and email is Working -CASE3") {
  BatteryCharacter batterychar = {MED_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(sendToConsole(NORMAL) == PASS);
  REQUIRE(sendToEmail(NORMAL) == PASS);
}


TEST_CASE("Infers If Sending to Controller and email is Working -CASE4") {
  BatteryCharacter batterychar = {HI_ACTIVE_COOLING, "CONSOLE"};
  REQUIRE(sendToConsole(NORMAL) == PASS);
  REQUIRE(sendToEmail(NORMAL) == PASS);
}


