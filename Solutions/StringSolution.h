//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_SOLUTIONS_STRINGSOLUTION_H_
#define EX4_SOLUTIONS_STRINGSOLUTION_H_
#include <string>
#include "../algorithms/Solution.h"
class StringSolution: public Solution<std::string> {

 public:
  explicit StringSolution(std::string solution);
  std::string getSolution() override;
};

#endif //EX4_SOLUTIONS_STRINGSOLUTION_H_
