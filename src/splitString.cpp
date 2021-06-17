#include "splitString.h"

std::vector<std::string> splitString(std::string& s, char separator)
{
  std::vector<std::string> result = { };

  std::string word = "";
  for (size_t i = 0; i < s.length(); ++i) {
    char c = s[i];
    if (c == separator) {
      result.push_back(word);
      word = "";
    } else {
      word += c;
    }
    if (i == s.length() - 1) {
      result.push_back(word);
    }
  }

  return result;
}
