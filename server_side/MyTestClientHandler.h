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
#include "../adapters/SolverSearcherAdapter.h"
#include "../TextFunctions.h"
namespace server_side {
template <typename P,typename S>
class MyTestClientHandler :public ClientHandler{
 private:
  Solver<P,S>* solver_;
 public:
  explicit MyTestClientHandler(Solver<P,S>* solver):solver_(solver)  {}
  void handle(int client) override;


};

template<typename P, typename S>
void MyTestClientHandler<P, S>::handle(int client_socket) {
  char buffer[1024] = {0};
  std::string data;
  while (true) {

    for (int kI = 0; kI < 1024; ++kI) {
      buffer[kI] = 0;
    }
    int val_read = read(client_socket, buffer, 1024);

    if (recv(client_socket, buffer, sizeof(buffer), MSG_PEEK | MSG_DONTWAIT) == 0){
      std::cout<<"err"<<std::endl;
    }
    std::string buf(buffer);
    //std::cout << buffer << std::endl;
    std::string res;

    data += buf;
    if (data.size()>4){
      if (data.find("end") != std::string::npos){
        break;
      }
    }
    //::send(client_socket,buffer,strlen(buffer),0);
  }

  /*std::size_t place = data.find("end");
  data = data.substr(0,place+4);*/
  std::cout<<data<<std::endl;
  std::vector<std::string> lines = split('\n',data);
  std::string s = data.substr(data.size()-40,data.size()-1);
  int size = lines.size() - 3;
  double* matrix = new double [size*size];
  for (int kI = 0; kI < size; ++kI) {
    std::vector<std::string> weights = split(',',lines[kI]);
    int weights_size = weights.size();
    for (int kJ = 0; kJ < weights_size; ++kJ) {
      matrix[kI* size + kJ] = std::stod(weights[kJ]);
    }
  }
  Matrix matrix1(matrix,size);
  std::pair<int,int> start;
  std::pair<int,int> end;
  std::vector<std::string> point1 = split(',',lines[size]);
  size++;
  std::vector<std::string> point2 = split(',',lines[size]);
  start.first = std::stoi(point1[0]);
  start.second = std::stoi(point1[1]);
  end.first = std::stoi(point2[0]);
  end.second = std::stoi(point2[1]);

  MatrixProblem matrix_problem(matrix1,start, end);
  StringSolution solution = this->solver_->solve(matrix_problem);
  std::string msg = solution.GetSolution();
  ::send(client_socket,msg.c_str(),msg.size(),0);
  close(client_socket);
}

}
#endif //EX4_SERVER_SIDE_MYTESTCLIENTHANDLER_H_
