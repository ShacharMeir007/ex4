//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_SOLVER_H_
#define EX4_SERVER_SIDE_SOLVER_H_
#include "Solution.h"
#include "Problem.h"
namespace server_side {
class Solver {
  virtual Solution solve(Problem problem) = 0;
};
}
#endif //EX4_SERVER_SIDE_SOLVER_H_
