//
// Created by yonathank on 01/02/2020.
//

#include <cstdlib>
#include <iostream>
#include "Matrix.h"
#include "State.h"

State<int> Matrix::getInitialState() {
  return State<int>(0);
}

bool Matrix::isGoal(State<int> state) {
  return state == State<int>(size * size - 1);
}

bool Matrix::operator==(Matrix &m) {
  if (m.GetN() != this->size) {
    return false;
  }
  int i, j;
  for (i = 0; i < this->size; i++) {
    for (j = 0; j < this->size; j++) {
      if (this->getElement(i, j) != m.getElement(i, j)) {
        return false;
      }
    }
  }
  return true;
}

Matrix::Matrix(double *mat,int n) {
  this->matrix = mat;
  this->size = n;

}

int Matrix::GetN() const {
  return size;
}

double Matrix::getElement(int i, int j) {
  if (i >= this->size || j >= this->size) {
    return -1;
  }
  return this->matrix[i * size + j];
}

Matrix::~Matrix() {
  free(matrix);
  free(this);
}
std::list<State<int>> Matrix::getAllPossibleStates(State<int> s) {
  std::list<State<int>> list;
  int n2 = size * size - 1;
  if (s.GetState() % size != size - 1) {
    State<int> state = State<int>(s.GetState() + 1);
    state.SetCost(matrix[s.GetState() + 1]);
    list.push_back(state);
  }
  if (s.GetState() % size != 0) {
    State<int> state = State<int>(s.GetState() - 1);
    state.SetCost(matrix[s.GetState() - 1]);
    list.push_back(state);
  }
  if (s.GetState() / size != 0) {
    State<int> state = State<int>(s.GetState() - size);
    state.SetCost(matrix[s.GetState() - size]);
    list.push_back(state);
  }
  if (s.GetState() / size != size - 1) {
    State<int> state = State<int>(s.GetState() + size);
    state.SetCost(matrix[s.GetState() + size]);
    list.push_back(state);
  }
  return list;
}
