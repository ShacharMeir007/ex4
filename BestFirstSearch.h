//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__BESTFIRSTSEARCH_H_
#define TEST__BESTFIRSTSEARCH_H_
#include <queue>
#include "Searcher.h"
#include "Heap.h"
#include "StateComparator.h"
template <typename T>
class BestFirstSearch: public Searcher<T> {
 public:
  std::list<State<T> *> search(Searchable<T> *searchable) override {
    searchable->reset();
    std::priority_queue <State<T>*, std::vector<State<T>*>, StateComparator<T>>min_heap;
    State<T>* start = searchable->getInitialState();
    min_heap.push(start);
    while (!min_heap.empty()){
      State<T>* next = min_heap.top();
      min_heap.pop();
      if (searchable->isGoal(next)){
        auto path = this->backTracePath(next);
        searchable->reset();
        return path;
      }
      std::list<State<T>*> neighbors = searchable->getNeighborStates(next);
      for (State<T>* neighbor: neighbors){
        if (neighbor->GetCameFrom() == nullptr){
          neighbor->SetCameFrom(next);
          min_heap.push(neighbor);
        }
        if (searchable->isGoal(neighbor)){
          auto path = this->backTracePath(neighbor);
          searchable->reset();
          return path;
        }
      }
    }

    return std::list<State<T> *>();
  }
  int getNumberOfNodesEvaluated() override {
    return 0;
  }

};

#endif //TEST__BESTFIRSTSEARCH_H_
