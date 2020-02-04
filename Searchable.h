//
// Created by shachar Meir on 03/02/2020.
//

#ifndef TEST__SEARCHABLE_H_
#define TEST__SEARCHABLE_H_
#include <vector>
#include <list>
#include "State.h"
template <typename T>
class Searchable {
 public:
  virtual State<T>* getInitialState() = 0;
  virtual State<T>* getGoalState() = 0;
  virtual bool isGoal(State<T>* state) = 0;
  virtual std::list<State<T>*> getNeighborStates(State<T>* state) = 0;
  virtual void reset() = 0;
};

#endif //TEST__SEARCHABLE_H_
