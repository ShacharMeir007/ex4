//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_PROBLEMS_MATRIXPROBLEM_H_
#define EX4_PROBLEMS_MATRIXPROBLEM_H_

#include "../Matrix.h"
class MatrixProblem {
 public:
  MatrixProblem(Matrix &matrix, std::pair<int, int> &start_point, std::pair<int, int> &end_point);
  Matrix &GetMatrix();
  std::pair<int, int> &GetStartPoint();
  std::pair<int, int> &GetEndPoint();
 private:
  Matrix matrix;
  std::pair<int,int> start_point;
  std::pair<int,int> end_point;


};

#endif //EX4_PROBLEMS_MATRIXPROBLEM_H_
