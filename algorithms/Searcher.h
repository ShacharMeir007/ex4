//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_SEARCHER_H_
#define EX4_ALGORITHMS_SEARCHER_H_

#include <list>
#include "State.h"
#include "Solution.h"

template<typename T>
class Searcher {
  virtual Solution<std::list<State<T>>> search() = 0;
  int getNumberOfNodesEvaluated() = 0;
};

#endif //EX4_ALGORITHMS_SEARCHER_H_
