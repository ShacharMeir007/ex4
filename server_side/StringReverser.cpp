//
// Created by shachar Meir on 26/01/2020.
//

#include "StringReverser.h"
std::string server_side::StringReverser::solve(std::string problem) {
  int size = problem.size();
  std::string result;
  for (int kI = size-1; kI >=0 ; --kI) {
    result += problem[kI];
  }
  return result;
}
