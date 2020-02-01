//
// Created by yonathank on 01/02/2020.
//

#ifndef EX4_ALGORITHMS_ASTAR_H_
#define EX4_ALGORITHMS_ASTAR_H_

#include "HeapSearcher.h"

template<typename T>
class AStar : public HeapSearcher<T> {
  Solution<std::list<State<T>>> search(Searchable<T> searchable) override;
};

#endif //EX4_ALGORITHMS_ASTAR_H_
