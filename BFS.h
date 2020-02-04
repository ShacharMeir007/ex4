//
// Created by shachar Meir on 03/02/2020.
//

#ifndef TEST__BFS_H_
#define TEST__BFS_H_
#include <queue>
#include "Searcher.h"
#include "Heap.h"
template <typename T>
class BFS: public Searcher<T> {
 public:
  std::list<State<T>*> search(Searchable<T> *searchable) override {
    searchable->reset();
    std::queue<State<T>*> queue;
    State<T>* start = searchable->getInitialState();
    queue.push(start);
    while (!queue.empty()){
      State<T>* next = queue.front();
      queue.pop();
      if (searchable->isGoal(next)){
        auto path = this->backTracePath(next);
        searchable->reset();
        return path;
      }
      std::list<State<T>*> neighbors = searchable->getNeighborStates(next);
      for (State<T>* neighbor: neighbors){
        if (neighbor->GetCameFrom() == nullptr){
          neighbor->SetCameFrom(next);
          queue.push(neighbor);
        }
        if (searchable->isGoal(neighbor)){
          auto path = this->backTracePath(neighbor);
          searchable->reset();
          return path;
        }
      }
    }
    return std::list<State<T>*>();
  }

  int getNumberOfNodesEvaluated() override {
    return 0;
  }
};

#endif //TEST__BFS_H_
