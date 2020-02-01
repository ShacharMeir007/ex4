//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_BESTFIRSTSEARCH_H_
#define EX4_ALGORITHMS_BESTFIRSTSEARCH_H_

#include "HeapSearcher.h"
#include <unordered_set>
#include <set>

template<typename T>
class BestFirstSearch : public HeapSearcher<T>{
 public:
  Solution<std::list<State<T>>> search(Searchable<T> *searchable) override {
    this->addOpenList(searchable->getInitialState());
    std::set<State<T>> closed;
    while (this->openListSize() > 0) {
      State<T> n = this->popOpenList();
      closed.insert(n);
      if (searchable->isGoal(n)) {
        return this->backTrace(&n);
      }
      std::list<State<T>> successors = searchable->getAllPossibleStates(n);
      for (State<T> s : successors) {
        if (!this->openListContains(s) && closed.find(s) == closed.end()) {
          s.SetCameFrom(&(*closed.find(n)));
          s.SetCost(s.GetCost() + n.GetCost());
          this->addOpenList(s);
        } else {
          if (this->openListContains(s)) {
            if (this->getElement(s).GetCost() > n.GetCost() + s.GetCost()) {
              this->getElement(s).SetCameFrom(&n);
              this->getElement(s).SetCost(s.GetCost() + n.GetCost());
              this->updateOpenList();
            }
          } else {
            State<T> state = *closed.find(s);
            if (state.GetCost() > n.GetCost() + s.GetCost()) {
              s.SetCost(n.GetCost() + s.GetCost());
              s.SetCameFrom(&n);
              this->addOpenList(s);
            }
          }
        }
      }
    }
    return Solution<std::list<State<T>>>();
  }
};

#endif //EX4_ALGORITHMS_BESTFIRSTSEARCH_H_
