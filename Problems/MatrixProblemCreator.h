//
// Created by shachar Meir on 03/02/2020.
//

#ifndef EX4_PROBLEMS_MATRIXPROBLEMCREATOR_H_
#define EX4_PROBLEMS_MATRIXPROBLEMCREATOR_H_
#include <string>
#include <vector>
#include "MatrixProblem.h"
#include "ProblemCreator.h"
#include "../TextFunctions.h"
class MatrixProblemCreator: public ProblemCreator<MatrixProblem, std::string> {
 public:
  MatrixProblem createProblem(std::string &data) override;
  virtual ~MatrixProblemCreator();
};

#endif //EX4_PROBLEMS_MATRIXPROBLEMCREATOR_H_
