//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_ADAPTERS_SOLVERSEARCHERADAPTER_H_
#define EX4_ADAPTERS_SOLVERSEARCHERADAPTER_H_

#include "../Matrix.h"
#include "../Solution.h"
#include "../server_side/Solver.h"
#include "../Problems/MatrixProblem.h"
#include "../Problems/StringSolution.h"
#include "../server_side/FileCacheManager.h"
#include "../Searcher.h"
class SolverSearcherAdapter: public server_side::Solver<MatrixProblem,StringSolution> {
 private:
  Searcher<int>* searcher_;
 public:
  explicit SolverSearcherAdapter(Searcher<int> *searcher);
  StringSolution solve(MatrixProblem problem) override;

  static std::string path_to_string(std::list<State<int>*> solution,int size);
};

#endif //EX4_ADAPTERS_SOLVERSEARCHERADAPTER_H_
