//
// Created by yonathank on 01/02/2020.
//

#ifndef EX4_ALGORITHMS_ASTAR_H_
#define EX4_ALGORITHMS_ASTAR_H_

#include "HeapSearcher.h"

template<typename T>
class AStar : public HeapSearcher<T> {
  Solution<std::list<State<T>>> search(Searchable<T> *searchable) override;
};
template<typename T>
Solution<std::list<State<T>>> AStar<T>::search(Searchable<T> *searchable) {
  std::unordered_set<State<T>> closed;
  addOpenHeap(searchable->getInitialState());
  while (this->openHeapSize() > 0) {
    State<T> current = this->popOpenHeap();
    if (searchable->isGoal(current)) {
      return this->backTrace(current);
    }
    closed.insert(current);
    std::list<State<T>> successors = searchable->getAllPossibleStates();
    for (State<T> s : successors) {
      double cost = s.GetCost() + current.GetCost();
      if (this->openHeapContains(s)) {
        s.SetCost(s.GetCost() + current.GetCost());
        s.SetCameFrom(current);
        this->addOpenHeap(s);
      } else {
        State<T> e = this->getElement(s);
        if (e.GetCost() > cost) {
          e.SetCost(cost);
          e.SetCameFrom(current);
          this->updateOpenHeap();
        }
      }
    }
  }
  return nullptr;
}

#endif //EX4_ALGORITHMS_ASTAR_H_
