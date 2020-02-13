//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_PROBLEMS_MATRIXPROBLEM_H_
#define EX4_PROBLEMS_MATRIXPROBLEM_H_
#include <string>
#include "../Matrix.h"

class MatrixProblem: public Searchable<int> {
 public:
  MatrixProblem(Matrix &matrix, std::pair<int, int> &start_point, std::pair<int, int> &end_point);
  virtual ~MatrixProblem();
  State<int> *getInitialState() override;
  State<int> *getGoalState() override;
  bool isGoal(State<int> *state) override;
  std::list<State<int> *> getNeighborStates(State<int> *state) override;
  void reset() override;
  Matrix &GetMatrix();
  std::pair<int, int> &GetStartPoint();
  std::pair<int, int> &GetEndPoint();
  std::string toString();
 private:
  Matrix matrix;
  std::pair<int,int> start_point;
  std::pair<int,int> end_point;


};

#endif //EX4_PROBLEMS_MATRIXPROBLEM_H_
