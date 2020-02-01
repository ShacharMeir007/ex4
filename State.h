//
// Created by yonathank on 31/01/2020.
//

#ifndef EX4_ALGORITHMS_STATE_H_
#define EX4_ALGORITHMS_STATE_H_

template<typename T>
class State {
  T state;
  double cost = 0;
  const State *cameFrom = nullptr;

 public:
  explicit State(T state) {this->state = state;};
  bool operator==(const State &s) const {return this->state == s.state;};
  bool operator>(const State &s) const {return this->cost > s.GetCost();};
  bool operator<(const State &s) const {return this->cost < s.GetCost();};
  double GetCost() const { return this->cost;};
  void SetCost(double c) {State::cost = c;};
  const State *GetCameFrom() const;
  void SetCameFrom(const State *came_from);
  T GetState() const;
};
template<typename T>
const State<T> *State<T>::GetCameFrom() const {
  return cameFrom;
}

template<typename T>
void State<T>::SetCameFrom(const State *came_from) {
  cameFrom = came_from;
}
template<typename T>
T State<T>::GetState() const {
  return state;
}

#endif //EX4_ALGORITHMS_STATE_H_
