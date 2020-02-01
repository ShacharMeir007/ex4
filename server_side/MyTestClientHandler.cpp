//
// Created by shachar Meir on 18/01/2020.
//


#include "MyTestClientHandler.h"
void server_side::MyTestClientHandler::handle(int client_socket) {
  char buffer[1024] = {0};
  std::string data;
  while (true) {

    //std::ifstream d(buffer);
    int val_read = read(client_socket, buffer, 1024);

    if (recv(client_socket, buffer, sizeof(buffer), MSG_PEEK | MSG_DONTWAIT) == 0){
      std::cout<<"err"<<std::endl;
    }
    std::string buf(buffer);
    std::cout << buf << std::endl;
    std::string res;
    data += buf;
    std::cout << data.size() << std::endl;
    if (data.size()>4){
      if (data.find("end") != std::string::npos){
        break;
      }
    }



    /*if (this->cache->is_in_cache(buffer)) {
      res = this->cache->pull_from_cache(buffer);
    } else {
      res = this->solver_->solve(buffer);
      this->cache->add_to_cache(buf, res);
    }*/
    //send(client_socket, res.c_str(), res.size(), 0);
    //send();
    // this->cache->is_in_cache();
  }
  close(client_socket);
}