//
// Created by shachar Meir on 18/01/2020.
//
#ifndef EX4_SERVER_SIDE_SERVER_H_
#define EX4_SERVER_SIDE_SERVER_H_
#include "ClientHandler.h"
namespace server_side {
class Server {
  virtual void open(int port, ClientHandler c) = 0;
  virtual void stop() = 0;
};


}
#endif //EX4_SERVER_SIDE_SERVER_H_