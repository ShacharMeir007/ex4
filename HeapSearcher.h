//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_HEAPSEARCHER_H_
#define EX4_ALGORITHMS_HEAPSEARCHER_H_

#include "Searcher.h"
#include "Heap.h"

template<class T>
class HeapSearcher : public Searcher<T> {
  Heap<State<T>> heap;
  int evaluateNods = 0;

 public:
  int openHeapSize();
  int getNumberOfNodesEvaluated() override;

 protected:
  State<T> popOpenHeap();
  void addOpenHeap(State<T> element);
  bool openHeapContains(State<T> element);
  State<T> &getElement(State<T> element);
  void updateOpenHeap();
  Solution<std::list<State<T>>> backTrace(const State<T> *goal);
};
template<typename T>
int HeapSearcher<T>::openHeapSize() {
  return heap.size();
}

template<typename T>
State<T> HeapSearcher<T>::popOpenHeap() {
  evaluateNods++;
  State<T> u = heap.top();
  heap.pop();
  heap.print();
  return u;
}

template<typename T>
int HeapSearcher<T>::getNumberOfNodesEvaluated() {
  return evaluateNods;
}

template<typename T>
void HeapSearcher<T>::addOpenHeap(State<T> element) {
  heap.push(element);
  heap.print();
}

template<typename T>
bool HeapSearcher<T>::openHeapContains(State<T> element) {
  return heap.contains(element);
}

template<typename T>
State<T> &HeapSearcher<T>::getElement(State<T> element) {
  return heap.find(element);
}

template<typename T>
void HeapSearcher<T>::updateOpenHeap() {
  heap.update();
  heap.print();
}

template<typename T>
Solution<std::list<State<T>>> HeapSearcher<T>::backTrace(const State<T> *goal) {
  std::list<State<T>> list;
  while (goal != nullptr) {
    list.push_front(*goal);
    goal = goal->GetCameFrom();
  }
  return Solution<std::list<State<T>>>(list);
}

#endif //EX4_ALGORITHMS_HEAPSEARCHER_H_
