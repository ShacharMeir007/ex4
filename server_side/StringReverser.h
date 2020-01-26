//
// Created by shachar Meir on 26/01/2020.
//

#ifndef EX4_SERVER_SIDE_STRINGREVERSER_H_
#define EX4_SERVER_SIDE_STRINGREVERSER_H_
#include <string>
#include "Solver.h"
namespace server_side {
class StringReverser: public Solver<std::string,std::string> {
  std::string solve(std::string problem) override;
};
}
#endif //EX4_SERVER_SIDE_STRINGREVERSER_H_
