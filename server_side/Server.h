//
// Created by shachar Meir on 18/01/2020.
//
namespace server_side {
#ifndef EX4_SERVER_SIDE_SERVER_H_
#define EX4_SERVER_SIDE_SERVER_H_

class Server {
  virtual void open(int port) = 0;
  virtual void stop() = 0;
};

#endif //EX4_SERVER_SIDE_SERVER_H_
}