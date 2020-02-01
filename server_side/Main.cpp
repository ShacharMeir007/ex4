//
// Created by shachar Meir on 31/01/2020.
//

#include "Main.h"

namespace server_side{
int Main::main(int port) {
  Solver<std::string,std::string>* solver = new StringReverser();
  CacheManager<std::string,std::string>* cache = new FileCacheManager<std::string,std::string>();
  Server* server = new MyParallelServer();
  ClientHandler* client_handler = new MyTestClientHandler(solver);
  server->open(port,client_handler);
  /*delete(server);
  delete (client_handler);*/
  return 0;
}
}