//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_HEAPSEARCHER_H_
#define EX4_ALGORITHMS_HEAPSEARCHER_H_

#include "Searcher.h"
#include "Heap.h"

template<typename T>
class HeapSearcher : public Searcher<T> {
  Heap<State<T>> heap;
  int evaluateNods = 0;

 public:
  int openListSize();
  int getNumberOfNodesEvaluated() override;

 protected:
  State<T> popOpenList();
  void addOpenList(State<T> element);
  bool openListContains(State<T> element);
  State<T> &getElement(State<T> element);
  void updateOpenList();
  Solution<std::list<State<T>>> backTrace(State<T> *goal);
};

#endif //EX4_ALGORITHMS_HEAPSEARCHER_H_
