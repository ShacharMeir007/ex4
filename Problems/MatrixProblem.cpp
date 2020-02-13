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
      word+= matrix.getElement(kI,kJ)->GetCost();
    }
  }
  word+= std::to_string(start_point.first);
  word+= std::to_string(start_point.second);
  word+= std::to_string(end_point.first);
  word+= std::to_string(end_point.second);
  return word ;
}

State<int> *MatrixProblem::getInitialState() {
  return this->matrix.getElement(start_point.first,start_point.second);
}
State<int> *MatrixProblem::getGoalState() {
  return this->matrix.getElement(end_point.first,end_point.second);
}
bool MatrixProblem::isGoal(State<int> *state) {
  return *state == *this->getGoalState();
}
std::list<State<int> *> MatrixProblem::getNeighborStates(State<int> *state) {
  return this->matrix.getNeighborStates(state);
}
void MatrixProblem::reset() {
  int size = this->matrix.GetN();
  for (int kI = 0; kI < size; ++kI) {
    for (int kJ = 0; kJ < size; ++kJ) {
      State<int>* s =this->matrix.getElement(kI,kJ);
      s->SetCameFrom(nullptr);
      s->SetShortestPathCost(-1);
    }
  }
  State<int>* start = this->getInitialState();
  start->SetCameFrom(start);
  start->SetShortestPathCost(0);
}
