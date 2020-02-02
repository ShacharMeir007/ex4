//
// Created by shachar Meir on 01/02/2020.
//

#include "SolverSearcherAdapter.h"
StringSolution SolverSearcherAdapter::solve(MatrixProblem problem){
  server_side::FileCacheManager<MatrixProblem,std::string> cache;
  if (cache.is_in_cache(problem)){
    std::string pull = cache.pull_from_cache(problem);
    StringSolution solution(pull);
    return solution;
  }

  Solution<std::list<State<int>>> result = this->searcher_->search(&problem.GetMatrix());
  std::string s = path_to_string(result);
  cache.add_to_cache(problem, s);
  StringSolution solution(s);
  return s;
}
std::string SolverSearcherAdapter::path_to_string(Solution<std::list<State<int>>> solution) {
  std::list<State<int>>list = solution.getSolution();
  int s  = list.front().GetState();
  return std::string();
}
SolverSearcherAdapter::SolverSearcherAdapter(Searcher<int> *searcher) : searcher_(searcher) {}
