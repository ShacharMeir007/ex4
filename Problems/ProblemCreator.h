//
// Created by shachar Meir on 03/02/2020.
//

#ifndef EX4_PROBLEMS_PROBLEMCREATOR_H_
#define EX4_PROBLEMS_PROBLEMCREATOR_H_
template <typename P,typename Data>
class ProblemCreator {
 public:
  virtual P createProblem(Data& data) = 0;
  virtual ~ProblemCreator() {

  }
};

#endif //EX4_PROBLEMS_PROBLEMCREATOR_H_
