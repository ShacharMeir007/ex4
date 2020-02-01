//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_HEAP_H_
#define EX4_ALGORITHMS_HEAP_H_

#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
#include "State.h"

template<class T>
class Heap {
  std::vector<T> heap;

 public:
  Heap() {std::make_heap(heap.begin(), heap.end(), std::greater<T>());};
  void push(T element);
  T top();
  void pop();
  void update();
  int size();
  bool contains(T element);
  T & find(T element);
  void print();
};
template<typename T>
void Heap<T>::push(T element) {
  heap.push_back(element);
  std::push_heap(heap.begin(), heap.end(), std::greater<T>());
}

template<typename T>
T Heap<T>::top() {
  return heap.front();
}

template<typename T>
void Heap<T>::pop() {
  std::pop_heap(heap.begin(), heap.end());
  heap.pop_back();
}

template<typename T>
void Heap<T>::update() {
  std::make_heap(heap.begin(), heap.end(), std::greater<T>());
}

template<typename T>
int Heap<T>::size() {
  return heap.size();
}

template<typename T>
bool Heap<T>::contains(T element) {
  return std::find(heap.begin(), heap.end(), element) != heap.end();
}

template<typename T>
T &Heap<T>::find(T element) {
  return *std::find(heap.begin(), heap.end(), element);
}
template<class T>
void Heap<T>::print() {
  for (State<int> v : heap) {
    std::cout << v.GetState() << " ";
  }
  std::cout << std::endl;
}

#endif //EX4_ALGORITHMS_HEAP_H_
