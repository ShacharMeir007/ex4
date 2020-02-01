//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_SOLVER_H_
#define EX4_SERVER_SIDE_SOLVER_H_
namespace server_side {
template<typename P, typename S>
class Solver{
 public:
  virtual S solve(P problem) = 0;

};
}
#endif //EX4_SERVER_SIDE_SOLVER_H_
