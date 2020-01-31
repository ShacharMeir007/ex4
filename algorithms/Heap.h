//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_HEAP_H_
#define EX4_ALGORITHMS_HEAP_H_

#include <algorithm>
#include <vector>
#include <functional>


template<typename T>
class Heap {
  std::vector<T> heap;

 public:
  Heap();
  void push(T element);
  T top();
  void pop();
  void update();
  int size();
  bool contains(T element);
  T & find(T element);
};

#endif //EX4_ALGORITHMS_HEAP_H_
