//
// Created by shachar Meir on 01/02/2020.
//

#include "SolverSearcherAdapter.h"
#include "../BestFirstSearch.h"
StringSolution SolverSearcherAdapter::solve(MatrixProblem problem){
  server_side::FileCacheManager<MatrixProblem,std::string> cache;
  if (cache.is_in_cache(problem)){
    std::string pull = cache.pull_from_cache(problem);
    StringSolution solution(pull);
    return solution;
  }
  BestFirstSearch<int> first_search;
  auto result = first_search.search(&problem.GetMatrix());
  std::string s = func(result);
  cache.add_to_cache(problem, s);
  StringSolution solution(s);
  return s;
}