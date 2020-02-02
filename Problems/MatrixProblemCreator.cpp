//
// Created by shachar Meir on 03/02/2020.
//

#include "MatrixProblemCreator.h"

MatrixProblem MatrixProblemCreator::createProblem(std::string &data) {
  std::vector<std::string> lines = split('\n',data);
  int size = lines.size() - 3;
  double* matrix = new double [size*size];
  for (int kI = 0; kI < size; ++kI) {
    std::vector<std::string> weights = split(',',lines[kI]);
    int weights_size = weights.size();
    for (int kJ = 0; kJ < weights_size; ++kJ) {
      matrix[kI* size + kJ] = std::stod(weights[kJ]);
    }
  }
  Matrix matrix1(matrix,size);
  std::pair<int,int> start;
  std::pair<int,int> end;
  std::vector<std::string> point1 = split(',',lines[size]);
  size++;
  std::vector<std::string> point2 = split(',',lines[size]);
  start.first = std::stoi(point1[0]);
  start.second = std::stoi(point1[1]);
  end.first = std::stoi(point2[0]);
  end.second = std::stoi(point2[1]);

  MatrixProblem matrix_problem(matrix1,start, end);
  return matrix_problem;
}
