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
#include "../Matrix.h"
#include "../Problems/MatrixProblem.h"
#include "../Problems/ProblemCreator.h"
#include "../adapters/SolverSearcherAdapter.h"
#include "../TextFunctions.h"
namespace server_side {
template <typename P,typename S>
class MyTestClientHandler :public ClientHandler{
 private:
  Solver<P,S>* solver;
  ProblemCreator<P,std::string>* problem_creator;
 public:
  explicit MyTestClientHandler(Solver<P,S>* solver,ProblemCreator<P,std::string>* problem_creator): solver(solver)
  ,problem_creator(problem_creator)  {}
  void handle(int client) override;


};

template<typename P, typename S>
void MyTestClientHandler<P, S>::handle(int client_socket) {
  char buffer[1024] = {0};
  std::string data;
  while (true) {

    for (char & kI : buffer) {
      kI = 0;
    }
    int val_read = read(client_socket, buffer, 1024);

    if (recv(client_socket, buffer, sizeof(buffer), MSG_PEEK | MSG_DONTWAIT) == 0){
      std::cout<<"err"<<std::endl;
    }
    std::string buf(buffer);
    std::string res;

    data += buf;
    if (data.size()>4){
      if (data.find("end") != std::string::npos){
        break;
      }
    }
  }

  /*std::cout<<data<<std::endl;
  std::string s = data.substr(data.size()-40,data.size()-1);
  */
  P problem = this->problem_creator->createProblem(data);
  S solution = this->solver->solve(problem);
  std::string msg = solution.GetSolution();
  ::send(client_socket,msg.c_str(),msg.size(),0);
  close(client_socket);
}

}
#endif //EX4_SERVER_SIDE_MYTESTCLIENTHANDLER_H_
