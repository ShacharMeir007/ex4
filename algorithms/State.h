//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_STATE_H_
#define EX4_ALGORITHMS_STATE_H_

template<typename T>
class State {
  T state;
  double cost = 0;
  State *cameFrom;

 public:
  explicit State(T state);
  bool operator==(const State & s);
  double GetCost() const;
  void SetCost(double c);
  State *GetCameFrom() const;
  void SetCameFrom(State *came_from);
};

#endif //EX4_ALGORITHMS_STATE_H_
