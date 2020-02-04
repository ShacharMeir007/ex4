//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__DFS_H_
#define TEST__DFS_H_

#include <queue>
#include <stack>
#include <set>
#include "Searcher.h"
template <typename T>
class DFS : public Searcher<T>{
 public:
  std::list<State<T> *> search(Searchable<T> *searchable) override {
    searchable->reset();
    std::stack<State<T>*> stack;
    State<T>* start = searchable->getInitialState();
    stack.push(start);
    if (searchable->isGoal(start)){
      auto path = this->backTracePath(start);
      searchable->reset();
      return path;
    }
    while (!stack.empty()) {
      State<T>* next = stack.top();
      stack.pop();
      if (searchable->isGoal(next)){
        auto path = this->backTracePath(next);
        searchable->reset();
        return path;
      }
      std::list<State<T> *> neighbors = searchable->getNeighborStates(next);
      //next->was_visited = true;
      for (State<T> *neighbor: neighbors) {
        if (neighbor->GetCameFrom() == nullptr){
          neighbor->SetCameFrom(next);
          stack.push(neighbor);
          if (searchable->isGoal(neighbor)){
            auto path = this->backTracePath(neighbor);
            searchable->reset();
            return path;
          }
        }
      }
    }
    return std::list<State<T> *>();
  }


  int getNumberOfNodesEvaluated() override {
    return 0;
  }
};

#endif //TEST__DFS_H_
