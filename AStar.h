//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__ASTAR_H_
#define TEST__ASTAR_H_
#include <set>
#include <queue>
#include "StateComparator.h"
#include "Searcher.h"
#include "Heap.h"
#include "StatePointerComparator.h"
template <typename T>
class AStar: public Searcher<T> {
 public:
  std::list<State<T> *> search(Searchable<T> *searchable) override {

    std::list<State<T>*> open_list;
    std::list<State<T>*> closed_list;
    searchable->reset();
    State<T>* start = searchable->getInitialState();
    open_list.push_back(start);
    if (searchable->isGoal(start)){
      return this->backTracePath(start);
    }
    while (!open_list.empty()){
      open_list.sort(StatePointerComparator<T>());
      State<T>* next = open_list.back();
      open_list.pop_back();
      closed_list.push_back(next);
      if (searchable->isGoal(next)){
        return this->backTracePath(next);
      }
      std::list<State<T>*> neighbors = searchable->getNeighborStates(next);
      for (State<T>* neighbor: neighbors){
        double next_cost = next->GetShortestPathCost()+neighbor->GetCost();
        auto place = std::find(open_list.begin(),open_list.end(),neighbor);
        if (place != open_list.end()){
          if(neighbor->GetShortestPathCost()>next_cost) {
            open_list.erase(place);
            neighbor->SetShortestPathCost(next_cost);
            neighbor->SetCameFrom(next);
            open_list.push_back(neighbor);
            continue;
          }
        } else{
          //relax
          place = std::find(closed_list.begin(),closed_list.end(),neighbor);
          if (place == closed_list.end()) {
            neighbor->SetShortestPathCost(next_cost);
            neighbor->SetCameFrom(next);
            open_list.push_back(neighbor);
          }
        }
      }
    }

    return this->backTracePath(searchable->getGoalState());
  }
  int getNumberOfNodesEvaluated() override {
    return 0;
  }
  virtual ~AStar() {

  }

};

#endif //TEST__ASTAR_H_
