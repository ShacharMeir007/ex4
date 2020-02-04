//
// Created by shachar Meir on 04/02/2020.
//

#ifndef TEST__STATECOMPARATOR_H_
#define TEST__STATECOMPARATOR_H_
#include "State.h"
template <typename T>
class StateComparator {
 public:
  int operator() (const State<T>& state1,const State<T>& state2){
    return state1.GetCost()> state2.GetCost();
  }
};

#endif //TEST__STATECOMPARATOR_H_
