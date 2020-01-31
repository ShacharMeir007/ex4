//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_SEARCHABLE_H_
#define EX4_ALGORITHMS_SEARCHABLE_H_

#include <list>
#include "State.h"

template <typename T>
class Searchable {
 public:
  virtual State<T> getInitialState() = 0;
  virtual State<T> getGoalState() = 0;
  virtual std::list<State<T>> getAllPossibleStates() = 0;
};

#endif //EX4_ALGORITHMS_SEARCHABLE_H_
