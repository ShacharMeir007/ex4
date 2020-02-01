//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_MYTESTCLIENTHANDLER_H_
#define EX4_SERVER_SIDE_MYTESTCLIENTHANDLER_H_
#include "ClientHandler.h"
#include "Solver.h"
#include <sys/socket.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <vector>
namespace server_side {

class MyTestClientHandler :public ClientHandler{
 private:
  Solver<std::string,std::string>* solver_;
 public:
  explicit MyTestClientHandler(Solver<std::string,std::string>* solver):solver_(solver)  {}
  void handle(int client) override;


};


}
#endif //EX4_SERVER_SIDE_MYTESTCLIENTHANDLER_H_
