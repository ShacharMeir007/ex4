//
// Created by yonathank on 31/01/2020.
//

#include "Solution.h"

template<typename T>
Solution<T>::Solution(T solution) {
  this->solution = solution;
}

template<typename T>
T Solution<T>::getSolution() {
  return this->solution;
}
