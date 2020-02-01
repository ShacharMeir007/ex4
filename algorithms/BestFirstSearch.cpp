//
// Created by yonathank on 31/01/2020.
//

#include "BestFirstSearch.h"

template<typename T>
Solution<std::list<State<T>>> BestFirstSearch<T>::search(Searchable<T> searchable) {
  this->addOpenList(searchable.getInitialState());
  std::unordered_set<State<T>> closed;
  while (this->openListSize() > 0) {
    State<T> n = this->popOpenList();
    closed.insert(n);
    if (searchable.isGoal(n)) {
      return backTrace(n);
    }
    std::list<State<T>> successors = searchable.getAllPossibleStates();
    for (State<T> s : successors) {
      if (!this->openListContains(s) && closed.find(s) == closed.end()) {
        s.SetCameFrom(n);
        s.SetCost(s.GetCost() + n.GetCost());
        this->addOpenList(s);
      } else {
        if (this->openListContains(s)) {
          if (this->getElement(s).GetCost() > n.GetCost() + s.GetCost()) {
            this->getElement(s).SetCameFrom(n);
            this->getElement(s).SetCost(s.GetCost() + n.GetCost());
            this->updateOpenList();
          }
        } else {
          State<T> state = closed.find(s);
          if (state.GetCost() > n.GetCost() + s.GetCost()) {
            s.SetCost(n.GetCost() + s.GetCost());
            s.SetCameFrom(n);
            this->addOpenList(s);
          }
        }
      }
    }
  }
}

