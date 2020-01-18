//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_CLIENTHANDLER_H_
#define EX4_SERVER_SIDE_CLIENTHANDLER_H_

#include <fstream>
#include "Server.h"
namespace server_side {
class ClientHandler {
  virtual void handle(std::ifstream, std::ofstream) = 0;
};
}
#endif //EX4_SERVER_SIDE_CLIENTHANDLER_H_
