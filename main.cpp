#include <iostream>
#include "server_side/Server.h"
#include "server_side/Main.h"

int main(int argc,char* argv[]) {
  int port;
  if (argc != 2){
    port = 5600;
  } else {
    port = atoi(argv[1]);
  }
  server_side::Main::main(port);
  return 0;
}
