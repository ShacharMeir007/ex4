//
// Created by yonathank on 01/02/2020.
//

#include <unordered_set>
#include "AStar.h"

template<typename T>
Solution<std::list<State<T>>> AStar<T>::search(Searchable<T> searchable) {
  std::unordered_set<State<T>> closed;
  addOpenList(searchable.getInitialState());
  while (this->openListSize() > 0) {
    State<T> current = this->popOpenList();
    if (searchable.isGoal(current)) {
      return this->backTrace(current);
    }
    closed.insert(current);
    std::list<State<T>> successors = searchable.getAllPossibleStates();
    for (State<T> s : successors) {
      double cost = s.GetCost() + current.GetCost();
      if (this->openListContains(s)) {
        s.SetCost(s.GetCost() + current.GetCost());
        s.SetCameFrom(current);
        this->addOpenList(s);
      } else {
        State<T> e = this->getElement(s);
        if (e.GetCost() > cost) {
          e.SetCost(cost);
          e.SetCameFrom(current);
          this->updateOpenList();
        }
      }
    }
  }
}
