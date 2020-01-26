//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_CLIENTHANDLER_H_
#define EX4_SERVER_SIDE_CLIENTHANDLER_H_

#include <fstream>
#include "Server.h"
#include "CacheManager.h"
namespace server_side {
class ClientHandler {
  CacheManager cache;
 public:
  virtual void handle(int client,char *, char*) = 0;
};
}
#endif //EX4_SERVER_SIDE_CLIENTHANDLER_H_
