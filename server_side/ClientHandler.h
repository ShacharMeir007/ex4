//
// Created by shachar Meir on 31/01/2020.
//

#ifndef EX4_SERVER_SIDE_CLIENTHANDLER_H_
#define EX4_SERVER_SIDE_CLIENTHANDLER_H_
#include <string>
#include "CacheManager.h"
namespace server_side{

class ClientHandler{
 public:

  virtual void handle(int client) = 0;

 protected:

};
}
#endif //EX4_SERVER_SIDE_CLIENTHANDLER_H_
