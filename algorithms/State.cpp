//
// Created by yonathank on 31/01/2020.
//

#include "State.h"

template<typename T>
bool State<T>::operator==(const State & s) {
  return this->state == s;
}

template<typename T>
State<T>::State(T state) {
  this->state = state;
}

template<typename T>
double State<T>::GetCost() const {
  return cost;
}

template<typename T>
void State<T>::SetCost(double c) {
  State::cost = c;
}

template<typename T>
State<T> *State<T>::GetCameFrom() const {
  return cameFrom;
}

template<typename T>
void State<T>::SetCameFrom(State *came_from) {
  cameFrom = came_from;
}
