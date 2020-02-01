//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_BESTFIRSTSEARCH_H_
#define EX4_ALGORITHMS_BESTFIRSTSEARCH_H_

#include "HeapSearcher.h"
#include <unordered_set>


template<typename T>
class BestFirstSearch : public HeapSearcher<T>{
  Solution<std::list<State<T>>> search(Searchable<T> searchable) override;
};

#endif //EX4_ALGORITHMS_BESTFIRSTSEARCH_H_
