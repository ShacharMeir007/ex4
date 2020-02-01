//
// Created by shachar Meir on 18/01/2020.
//


#include "MyTestClientHandler.h"
void server_side::MyTestClientHandler::handle(int client_socket) {
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

  ::send(client_socket,data.substr(4000,data.size()-1).c_str(),data.size(),0);
  close(client_socket);
}