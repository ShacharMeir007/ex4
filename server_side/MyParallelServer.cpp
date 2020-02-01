//
// Created by shachar Meir on 01/02/2020.
//

#include "MyParallelServer.h"
//
// Created by shachar Meir on 18/01/2020.
//



#include "MySerialServer.h"
void server_side::MyParallelServer::stop() {
  this->close_ = true;
}

void server_side::MyParallelServer::open(int port,ClientHandler* c) {

  this->server_thread = new std::thread(&MyParallelServer::run,this,port, c);
  this->server_thread->join();
}

void server_side::MyParallelServer::run(int port, ClientHandler *c) {
  int socketfd = socket(AF_INET, SOCK_STREAM,0);
  if (socketfd == -1){
    std::cerr<<"can't create socket"<<std::endl;
  }

  //setting timeout
  timeval tv;
  tv.tv_sec = 10;
  setsockopt(socketfd,SOL_SOCKET,SO_RCVTIMEO,(const char*)&tv, sizeof(tv));
  sockaddr_in address;
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(port);
  if (::bind(socketfd, (struct sockaddr *) &address, sizeof(address)) == -1) {
    std::cerr<<"Could not bind the socket to an IP"<<std::endl;
    return;
  }


  if (listen(socketfd, 1) == -1) {
    std::cerr << "Error during listening command" << std::endl;
    return;
  } else {
    std::cout << "Server is now listening ..." << std::endl;
  }
  while (!close_) {
    // accepting a client
    std::cout << "Server is waiting to accept" << std::endl;
    int client_socket = accept(socketfd, (struct sockaddr *) &address,
                               (socklen_t *) &address);
    std::cout << "accepted" << std::endl;
    if (client_socket == -1) {
      std::cerr << "Error accepting client" << std::endl;
      stop();
      break;
    }

    this->client_threads.push(new std::thread(&ClientHandler::handle,c,client_socket));

    //c->handle(client_socket);

  }
  close(socketfd);
}


