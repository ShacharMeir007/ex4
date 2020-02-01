//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_PROBLEMS_STRINGSOLUTION_H_
#define EX4_PROBLEMS_STRINGSOLUTION_H_

#include <string>
class StringSolution {
 public:
  StringSolution(const std::string &solution);
  std::string &GetSolution();
 private:
  std::string solution;

};

#endif //EX4_PROBLEMS_STRINGSOLUTION_H_
