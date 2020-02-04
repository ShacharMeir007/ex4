//
// Created by shachar Meir on 01/02/2020.
//

#include "SolverSearcherAdapter.h"
StringSolution SolverSearcherAdapter::solve(MatrixProblem problem){
  server_side::FileCacheManager<MatrixProblem,std::string> cache;
  try {
    if (cache.is_in_cache(problem)){
      std::string s = cache.pull_from_cache(problem);
      StringSolution solution1(s);
      return solution1;
    }
  } catch (std::exception& exception){
    std::cerr<<"could not load from file"<<std::endl;
  }

  std::list<State<int>*> path = this->searcher_->search(&problem.GetMatrix());
  std::string s = path_to_string(path, problem.GetMatrix().GetN());
  cache.add_to_cache(problem, s);
  StringSolution solution(s);
  return solution;
}
std::string SolverSearcherAdapter::path_to_string(std::list<State<int>*> path,int size){
  std::string data;
  int cost = 0;
  State<int>* first = path.front();
  cost += first->GetCost();
  path.pop_front();
  State<int>* second;
  while (!path.empty()){
    second = path.front();
    cost += second->GetCost();
    //right
    if (first->GetState() + 1 == second->GetState()){
      data += "Right (" +std::to_string(cost);
    } else if (first->GetState() - 1 == second->GetState()){
      data += "Left (" +std::to_string(cost);
    } else if (first->GetState() + size == second->GetState()){
      data += "Down (" +std::to_string(cost);
    } else if (first->GetState() - size == second->GetState()){
      data += "Up (" +std::to_string(cost);
    } else{

    }
    if (path.size() >1){
      data += ") ,";
    } else {
      data += ")";
    }
    first = second;
    path.pop_front();
  }
  return data;
}
SolverSearcherAdapter::SolverSearcherAdapter(Searcher<int> *searcher) : searcher_(searcher) {}
