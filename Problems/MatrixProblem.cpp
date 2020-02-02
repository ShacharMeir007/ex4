//
// Created by shachar Meir on 01/02/2020.
//

#include "MatrixProblem.h"

MatrixProblem::MatrixProblem( Matrix &matrix,
                              std::pair<int, int> &start_point,
                              std::pair<int, int> &end_point)
    : matrix(matrix), start_point(start_point), end_point(end_point) {

}
Matrix &MatrixProblem::GetMatrix() {
  return matrix;
}
std::pair<int, int> &MatrixProblem::GetStartPoint()  {
  return start_point;
}
std::pair<int, int> &MatrixProblem::GetEndPoint()  {
  return end_point;
}
std::string MatrixProblem::toString() {
  std::string word;
  int size = matrix.GetN();
  for (int kI = 0; kI < size ; ++kI) {
    for (int kJ = 0; kJ < size; ++kJ) {
      word+= matrix.getElement(kI,kJ);
    }
  }
  word+= std::to_string(start_point.first);
  word+= std::to_string(start_point.second);
  word+= std::to_string(end_point.first);
  word+= std::to_string(end_point.second);
  return word ;
}
