//
// Created by shachar Meir on 03/02/2020.
//

#ifndef TEST__MATRIX_H_
#define TEST__MATRIX_H_

#include "Searchable.h"

class Matrix : public Searchable<int> {

  State<int>** matrix = nullptr;
  int size, location = 0;
 public:
  virtual ~Matrix();
  int GetN() const;
  State<int>* getElement(int i, int j);
  explicit Matrix(double* matrix,int size);
  State<int>* getInitialState() override;
  void reset() override;
  bool isGoal(State<int>* state) override;
  std::list<State<int>*> getNeighborStates(State<int>* s) override;
  bool operator==(Matrix &m);
  State<int> *getGoalState() override;
};

#endif //TEST__MATRIX_H_
