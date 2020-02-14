//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__BESTFIRSTSEARCH_H_
#define TEST__BESTFIRSTSEARCH_H_
#include <queue>
#include <set>
#include "Searcher.h"
#include "Heap.h"
#include "StateComparator.h"
#include "StatePointerComparator.h"
template <typename T>
class BestFirstSearch: public Searcher<T> {
 public:
  std::list<State<T> *> search(Searchable<T> *searchable) override {
    searchable->reset();
    std::list<State<T>*> open_list;
    std::set<State<T>*> closed_list;
    State<T>* start = searchable->getInitialState();
    open_list.push_back(start);
    while (!open_list.empty()){
      open_list.sort(StatePointerComparator<T>());
      State<T>* current = open_list.back();
      open_list.pop_back();
      if (searchable->isGoal(current)){
        auto path = this->backTracePath(current);
        searchable->reset();
        return path;
      }
      std::list<State<T>*> neighbors = searchable->getNeighborStates(current);
      for (State<T>* neighbor: neighbors){
        if (closed_list.find(neighbor) == closed_list.end()) {
          if (std::find(open_list.begin(), open_list.end(), neighbor) == open_list.end()) {
            neighbor->SetCameFrom(current);
            open_list.push_back(neighbor);
          }
          double n_cost = neighbor->GetShortestPathCost();
          double c_cost = current->GetShortestPathCost();
          if (n_cost > c_cost + neighbor->GetCost() || n_cost == -1) {
            neighbor->SetShortestPathCost(c_cost + neighbor->GetCost());
          }
          if (searchable->isGoal(neighbor)) {
            auto path = this->backTracePath(neighbor);
            searchable->reset();
            return path;
          }
        }
      }
      closed_list.insert(current);
    }

    return std::list<State<T> *>();
  }
  int getNumberOfNodesEvaluated() override {
    return 0;
  }

};

#endif //TEST__BESTFIRSTSEARCH_H_
