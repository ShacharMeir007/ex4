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
  return state == State<int>(n * n - 1);
}

bool Matrix::operator==(Matrix &m) {
  if (m.GetN() != this->n) {
    return false;
  }
  int i, j;
  for (i = 0; i < this->n; i++) {
    for (j = 0; j < this->n; j++) {
      if (this->getElement(i, j) != m.getElement(i, j)) {
        return false;
      }
    }
  }
  return true;
}

Matrix::Matrix(int n) {
  matrix = (int *) malloc(n * n * sizeof(int));
  this->n = n;
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == 0 && j == 0) {
        matrix[0] = rand() % 11;
        std::cout << matrix[0];
        continue;
      }
      matrix[i * n + j] = rand() % 12 - 1;
      std::cout << matrix[i * n + j];
    }
    std::cout << std::endl;
  }
}

int Matrix::GetN() const {
  return n;
}

int Matrix::getElement(int i, int j) {
  if (i >= this->n || j >= this->n) {
    return -1;
  }
  return this->matrix[i * n + j];
}

Matrix::~Matrix() {
  free(matrix);
  free(this);
}
std::list<State<int>> Matrix::getAllPossibleStates(State<int> s) {
  std::list<State<int>> list;
  int n2 = n * n - 1;
  if (s.GetState() % n != n - 1) {
    State<int> state = State<int>(s.GetState() + 1);
    state.SetCost(matrix[s.GetState() + 1]);
    list.push_back(state);
  }
  if (s.GetState() % n != 0) {
    State<int> state = State<int>(s.GetState() - 1);
    state.SetCost(matrix[s.GetState() - 1]);
    list.push_back(state);
  }
  if (s.GetState() / n != 0) {
    State<int> state = State<int>(s.GetState() - n);
    state.SetCost(matrix[s.GetState() - n]);
    list.push_back(state);
  }
  if (s.GetState() / n != n - 1) {
    State<int> state = State<int>(s.GetState() + n);
    state.SetCost(matrix[s.GetState() + n]);
    list.push_back(state);
  }
  return list;
}
