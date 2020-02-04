//
// Created by shachar Meir on 03/02/2020.
//

#ifndef TEST__SEARCHER_H_
#define TEST__SEARCHER_H_
#include "State.h"
#include <list>
#include "Searchable.h"
template <typename T>
class Searcher {
 public:
  virtual std::list<State<T>*> search(Searchable<T> *searchable) = 0;
  virtual int getNumberOfNodesEvaluated() = 0;
  std::list<State<T>*> backTracePath(State<T>* goal){
    std::list<State<T>*> path;
    path.push_front(goal);
    State<T>* handle = goal->GetCameFrom();
    while(!(*handle->GetCameFrom() == *handle)){
      path.push_front(handle);
      handle = handle->GetCameFrom();
    }
    path.push_front(handle);
    return path;
  }
};

#endif //TEST__SEARCHER_H_
