//
// Created by shachar Meir on 01/02/2020.
//

#ifndef EX4_SERVER_SIDE_MYPARALLELSERVER_H_
#define EX4_SERVER_SIDE_MYPARALLELSERVER_H_
#include "Server.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <thread>
#include <stack>
namespace server_side {
class MyParallelServer: public Server {
 private:
  bool close_ = false;
  std::thread* server_thread = nullptr;
  std::stack<std::thread*> client_threads;
 public:
  void run(int port,ClientHandler* c);
  void open(int port,ClientHandler* c) override;
  void stop() override;
  virtual ~MyParallelServer();
};
}
#endif //EX4_SERVER_SIDE_MYPARALLELSERVER_H_
