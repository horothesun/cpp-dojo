#include "catch.hpp"
#include <string>
#include <vector>

#include "splitString.h"

TEST_CASE("splitting \"Hello, I'm a test!\" by blank space")
{
  std::string s = "Hello, I'm a test!";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "Hello,", "I'm", "a", "test!" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}

TEST_CASE("splitting \"Hi  tester!\" by blank space")
{
  std::string s = "Hi  tester!";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "Hi", "", "tester!" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}

TEST_CASE("splitting \"1 2 3 4 \" by blank space")
{
  std::string s = "1 2 3 4 ";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "1", "2", "3", "4", "" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}

TEST_CASE("splitting \"1 2 3 4  \" by blank space")
{
  std::string s = "1 2 3 4  ";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "1", "2", "3", "4", "", "" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}

TEST_CASE("splitting \" a b c d\" by blank space")
{
  std::string s = " a b c d";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "", "a", "b", "c", "d" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}

TEST_CASE("splitting \"  a b c d\" by blank space")
{
  std::string s = "  a b c d";
  char separator = ' ';
  std::vector<std::string> expectedOutput = { "", "", "a", "b", "c", "d" };
  REQUIRE(splitString(s, separator) == expectedOutput);
}
