//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_SOLUTION_H_
#define EX4_ALGORITHMS_SOLUTION_H_

template<typename T>
class Solution {
  T solution;

 public:
  explicit Solution(T solution);
  Solution();
  T getSolution();
};
template<typename T>
Solution<T>::Solution(T solution) {
  this->solution = solution;
}

template<typename T>
Solution<T>::Solution() {}

template<typename T>
T Solution<T>::getSolution() {
  return this->solution;
}


#endif //EX4_ALGORITHMS_SOLUTION_H_
