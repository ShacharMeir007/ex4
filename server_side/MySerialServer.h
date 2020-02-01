//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_MYSERIALSERVER_H_
#define EX4_SERVER_SIDE_MYSERIALSERVER_H_
#include "Server.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <thread>
namespace server_side {
class MySerialServer : public Server {
 private:
  bool close_ = false;
  std::thread* thread_ = nullptr;
 public:
  void run(int port,ClientHandler* c);
  void open(int port,ClientHandler* c) override;
  void stop() override;

};


#endif //EX4_SERVER_SIDE_MYSERIALSERVER_H_
}