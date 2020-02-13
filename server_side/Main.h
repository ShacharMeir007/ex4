//
// Created by shachar Meir on 31/01/2020.
//

#ifndef EX4_SERVER_SIDE_MAIN_H_
#define EX4_SERVER_SIDE_MAIN_H_
#include "Solver.h"
#include "StringReverser.h"
#include "CacheManager.h"
#include "FileCacheManager.h"
#include "Server.h"
#include "MySerialServer.h"
#include "MyParallelServer.h"
#include "MyTestClientHandler.h"
#include "../Problems/MatrixProblem.h"
#include "../Problems/StringSolution.h"
#include "../BestFirstSearch.h"
#include "../AStar.h"
#include "../BFS.h"
#include "../DFS.h"
namespace server_side {
class Main {
 public:
  static int main(int port);
};
}
#endif //EX4_SERVER_SIDE_MAIN_H_
