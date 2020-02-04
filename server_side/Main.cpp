//
// Created by shachar Meir on 31/01/2020.
//

#include "Main.h"
#include "../Problems/MatrixProblemCreator.h"

namespace server_side{
int Main::main(int port) {
  Server* server = new MyParallelServer();
  Solver<MatrixProblem,StringSolution>* solver = new SolverSearcherAdapter(new AStar<int>);
  ProblemCreator<MatrixProblem,std::string>* problem_creator = new MatrixProblemCreator();
  ClientHandler* client_handler = new MyTestClientHandler<MatrixProblem,StringSolution>(solver,problem_creator);
  server->open(port,client_handler);
  /*delete(server);
  delete (client_handler);*/
  return 0;
}
}