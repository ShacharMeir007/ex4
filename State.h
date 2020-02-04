//
// Created by shachar Meir on 03/02/2020.
//

#ifndef TEST__STATE_H_
#define TEST__STATE_H_
template<typename T>
class State {
  T state;
  double cost = 0;
  double shortest_path_cost = -1;
  State *parent = nullptr;
 public:
  double GetShortestPathCost() const;
  void SetShortestPathCost(double shortest_path_cost);
 public:
  explicit State(T state) {this->state = state;};
  bool operator==(const State &s) const {return this->state == s.state;};
  bool operator>(const State &s) const {return this->cost > s.GetCost();};
  bool operator<(const State &s) const {return this->cost < s.GetCost();};
  double GetCost() const { return this->cost;};
  void SetCost(double c) {this->cost = c;};
   State<T> *GetCameFrom() ;
  void SetCameFrom(State *came_from);
  T GetState();
  State();
};
template<typename T>
 State<T>* State<T>::GetCameFrom()  {
  return this->parent;
}

template<typename T>
void State<T>::SetCameFrom(State *came_from) {
  this->parent = came_from;
}
template<typename T>
T State<T>::GetState() {
  return state;
}
template<typename T>
double State<T>::GetShortestPathCost() const {
  return shortest_path_cost;
}
template<typename T>
void State<T>::SetShortestPathCost(double shortest_path_cost) {
  State::shortest_path_cost = shortest_path_cost;
}
template<typename T>
State<T>::State() = default;

#endif //TEST__STATE_H_
