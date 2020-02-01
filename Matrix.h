//
// Created by yonathank on 01/02/2020.
//

#ifndef EX4_ALGORITHMS_MATRIX_H_
#define EX4_ALGORITHMS_MATRIX_H_

#include "Searchable.h"

class Matrix : public Searchable<int> {
  int *matrix = nullptr, n, location = 0;
 public:
  virtual ~Matrix();
  int GetN() const;
  int getElement(int i, int j);
  explicit Matrix(int n);
  State<int> getInitialState() override;
  bool isGoal(State<int> state) override;
  std::list<State<int>> getAllPossibleStates(State<int> s) override;
  bool operator==(Matrix &m);
};

#endif //EX4_ALGORITHMS_MATRIX_H_
