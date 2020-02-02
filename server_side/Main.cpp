//
// Created by shachar Meir on 31/01/2020.
//

#include "Main.h"

namespace server_side{
int Main::main(int port) {
  Server* server = new MyParallelServer();
  SolverSearcherAdapter* solver = new SolverSearcherAdapter(new BestFirstSearch<int>);
  ClientHandler* client_handler = new MyTestClientHandler<MatrixProblem,StringSolution>(solver);
  server->open(port,client_handler);
  /*delete(server);
  delete (client_handler);*/
  return 0;
}
}