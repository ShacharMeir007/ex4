

#include <cstdlib>
#include <iostream>
#include "Matrix.h"
#include "State.h"

State<int>* Matrix::getInitialState() {
  auto s = this->matrix[0];
  return s;
}

bool Matrix::isGoal(State<int>* state) {
  return *state == State<int>(size * size - 1);
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
  this->size = n;
  this->matrix = new State<int>*[size*size];
  for (int kI = 0; kI < size; ++kI) {
    int p = kI*size;
    for (int kJ = 0; kJ < size ; ++kJ) {
      auto s = new State<int>(p+kJ);
      s->SetCost(mat[p+kJ]);
      matrix[p+kJ] = s;
    }
  }

}

int Matrix::GetN() const {
  return size;
}

State<int>* Matrix::getElement(int i, int j) {
  if (i >= this->size || j >= this->size) {
    return nullptr;
  }
  return this->matrix[i * size + j];
}

Matrix::~Matrix() {
  //free(matrix);
  //free(this);
}
std::list<State<int>*> Matrix::getNeighborStates(State<int>* s)  {
  std::list<State<int>*> list;
  int position = s->GetState();
  int last_pos = size*size-1;
  // left
  if (position%size >= 1){
    auto state = this->matrix[position - 1];
    if (state->GetCost() != -1){
      list.push_back(state);
    }
  }
  // right
  if (position % size <= this->size - 2){
    auto state = this->matrix[position + 1];
    if (state->GetCost() != -1){
      list.push_back(state);
    }
  }
  // up
  if (position % size != position){
    auto state = this->matrix[position - size];
    if (state->GetCost() != -1){
      list.push_back(state);
    }
  }
  //down
  if (position + size <= last_pos){
    auto state = this->matrix[position + size];
    if (state->GetCost() != -1){
      list.push_back(state);
    }
  }
  /*if (s.GetState() % size != size - 1) {
    State<int> state = State<int>(s.GetState() + 1);
    state.SetCost(matrix[s.GetState() + 1]);
    if (state.GetCost() != -1){
      list.push_back(state);
    }
  }
  if (s.GetState() % size != 0) {
    State<int> state = State<int>(s.GetState() - 1);
    state.SetCost(matrix[s.GetState() - 1]);
    if (state.GetCost() != -1){
      list.push_back(state);
    }
  }
  if (s.GetState() / size != 0) {
    State<int> state = State<int>(s.GetState() - size);
    state.SetCost(matrix[s.GetState() - size]);
    if (state.GetCost() != -1){
      list.push_back(state);
    }
  }
  if (s.GetState() / size != size - 1) {
    State<int> state = State<int>(s.GetState() + size);
    state.SetCost(matrix[s.GetState() + size]);
    if (state.GetCost() != -1){
      list.push_back(state);
    }
  }*/
  return list;
}
void Matrix::reset() {
  for (int kI = 0; kI < this->size; ++kI) {
    int p = kI * this->size;
    for (int kJ = 0; kJ < this->size; ++kJ) {
      State<int>* s =this->matrix[p+kJ];
      s->SetCameFrom(nullptr);
      s->SetShortestPathCost(-1);
    }
  }
  State<int>* start = this->getInitialState();
  start->SetCameFrom(start);
  start->SetShortestPathCost(0);
}
State<int> *Matrix::getGoalState() {
  return getElement(size-1,size-1);
}
