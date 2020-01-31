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
