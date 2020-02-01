#include <iostream>
#include "server_side/Server.h"
#include "server_side/Main.h"

int main(int argc,char* argv[]) {
  if (argc != 2){
    std::cerr<< "Check Parameters"<<std::endl;
    return 1;
  }
  int port = atoi(argv[1]);
  server_side::Main main1;
  main1.main(port);
  return 0;
}
