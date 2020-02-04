//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__STATEPOINTERCOMPARATOR_H_
#define TEST__STATEPOINTERCOMPARATOR_H_
#include "State.h"
template <typename T>
class StatePointerComparator {
 public:
  int operator() (State<T>*& state1,State<T>*& state2){
    return state1->GetShortestPathCost()> state2->GetShortestPathCost()|| state1->GetShortestPathCost() ==-1;
  }
};

#endif //TEST__STATEPOINTERCOMPARATOR_H_
