#include "joinStrings.h"

std::string joinStrings(std::vector<std::string>& strings, std::string& separator) {
  std::string result = "";

  for (size_t i = 0; i < strings.size(); ++i) {
      result += strings[i];
      if (i < strings.size() - 1) { result += separator; }
  }

  return result;
}
