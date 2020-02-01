//
// Created by yonathank on 31/01/2020.
//

#include "HeapSearcher.h"

template<typename T>
int HeapSearcher<T>::openListSize() {
  return heap.size();
}

template<typename T>
State<T> HeapSearcher<T>::popOpenList() {
  evaluateNods++;
  State<T> u = heap.top();
  heap.pop();
  return u;
}

template<typename T>
int HeapSearcher<T>::getNumberOfNodesEvaluated() {
  return evaluateNods;
}

template<typename T>
void HeapSearcher<T>::addOpenList(State<T> element) {
  heap.push(element);
}

template<typename T>
bool HeapSearcher<T>::openListContains(State<T> element) {
  return heap.contains(element);
}

template<typename T>
State<T> &HeapSearcher<T>::getElement(State<T> element) {
  return heap.find(element);
}

template<typename T>
void HeapSearcher<T>::updateOpenList() {
  heap.update();
}

template<typename T>
Solution<std::list<State<T>>> HeapSearcher<T>::backTrace(State<T> *goal) {
  std::list<State<T>> list;
  while (goal != nullptr) {
    list.push_front(goal);
    goal = goal->GetCameFrom();
  }
  return Solution<T>(list);
}

