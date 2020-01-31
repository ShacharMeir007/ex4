//
// Created by yonathank on 31/01/2020.
//

#include "Heap.h"

template<typename T>
Heap<T>::Heap() {
  std::make_heap(heap.begin(), heap.end(), std::greater<T>());
}

template<typename T>
void Heap<T>::push(T element) {
  heap.push_back(element);
  std::push_heap(heap.begin(), heap.end());
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
  return std::find(heap.begin(), heap.end(), element);
}
