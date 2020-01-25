//
// Created by shachar Meir on 18/01/2020.
//



#include "MySerialServer.h"
void server_side::MySerialServer::open(int port,ClientHandler c) {
  int socketfd = socket(AF_INET, SOCK_STREAM,0);
  if (socketfd == -1){
    std::cerr<<"can't create socket"<<std::endl;
  }
  sockaddr_in address;
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(port);
  if (::bind(socketfd, (struct sockaddr *) &address, sizeof(address)) == -1) {
    std::cerr<<"Could not bind the socket to an IP"<<std::endl;
  }
  if (listen(socketfd, 5) == -1) {
    std::cerr<<"Error during listening command"<<std::endl;
  } else{
    std::cout<<"Server is now listening ..."<<std::endl;
  }

  //todo add select to the mix

  // accepting a client
  int client_socket = accept(socketfd, (struct sockaddr *)&address,
                             (socklen_t*)&address);

  if (client_socket == -1) {
    std::cerr<<"Error accepting client"<<std::endl;

  }
  char buffer[1024] = {0};
  //std::ifstream d(buffer);
  int val_read = read(client_socket,buffer,1024);
  char result[1024] = {0};
  c.handle(client_socket,buffer,result);

  close(socketfd);
}
void server_side::MySerialServer::stop() {

}
