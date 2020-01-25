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
namespace server_side {

class MySerialServer : public Server {
  void open(int port,ClientHandler c) override;
  void stop() override;

};

#endif //EX4_SERVER_SIDE_MYSERIALSERVER_H_
}