#include "catch.hpp"
#include <string>
#include <vector>

#include "joinStrings.h"

TEST_CASE("joining { \"Hello,\", \"I'm\", \"a\", \"test!\" } with a blank space")
{
  std::vector<std::string> strings = { "Hello,", "I'm", "a", "test!" };
  std::string separator = " ";
  std::string expectedOutput = "Hello, I'm a test!";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}

TEST_CASE("joining { \"Hi\", \"\", \"tester!\" } with a blank space")
{
  std::vector<std::string> strings = { "Hi", "", "tester!" };
  std::string separator = " ";
  std::string expectedOutput = "Hi  tester!";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}

TEST_CASE("joining { \"1\", \"2\", \"3\", \"4\", \"\" } with a blank space")
{
  std::vector<std::string> strings = { "1", "2", "3", "4", "" };
  std::string separator = " ";
  std::string expectedOutput = "1 2 3 4 ";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}

TEST_CASE("joining { \"1\", \"2\", \"3\", \"4\", \"\", \"\" } with a blank space")
{
  std::vector<std::string> strings = { "1", "2", "3", "4", "", "" };
  std::string separator = " ";
  std::string expectedOutput = "1 2 3 4  ";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}

TEST_CASE("joining { \"\", \"a\", \"b\", \"c\", \"d\" } with a blank space")
{
  std::vector<std::string> strings = { "", "a", "b", "c", "d" };
  std::string separator = " ";
  std::string expectedOutput = " a b c d";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}

TEST_CASE("joining { \"\", \"\", \"a\", \"b\", \"c\", \"d\" } with a blank space")
{
  std::vector<std::string> strings = { "", "", "a", "b", "c", "d" };
  std::string separator = " ";
  std::string expectedOutput = "  a b c d";
  REQUIRE(joinStrings(strings, separator) == expectedOutput);
}
