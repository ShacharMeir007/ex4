//
// Created by shachar Meir on 18/01/2020.
//


#include "MyTestClientHandler.h"
#include "../Matrix.h"
std::vector<std::string> split(const char token, std::string& str) {
  std::vector<std::string> vector;
  std::string temp;
  bool in_text = false;
  for(char& c:str){
    if (!in_text) {
      if (c == token) {
        vector.push_back(temp);
        temp = std::string();
      } else {
        temp += c;
        if (c == '"'){
          in_text = true;
        }
      }
    } else{
      temp += c;
      if (c == '"'){
        in_text = false;
      }
    }
  }
  if(!temp.empty()){
    vector.push_back(temp);
  }
  return vector;
}
void server_side::MyTestClientHandler::handle(int client_socket) {
  char buffer[1024] = {0};
  std::string data;
  while (true) {

    for (int kI = 0; kI < 1024; ++kI) {
      buffer[kI] = 0;
    }
    int val_read = read(client_socket, buffer, 1024);

    if (recv(client_socket, buffer, sizeof(buffer), MSG_PEEK | MSG_DONTWAIT) == 0){
      std::cout<<"err"<<std::endl;
    }
    std::string buf(buffer);
    //std::cout << buffer << std::endl;
    std::string res;

    data += buf;
    if (data.size()>4){
      if (data.find("end") != std::string::npos){
        break;
      }
    }
    //::send(client_socket,buffer,strlen(buffer),0);
  }

  /*std::size_t place = data.find("end");
  data = data.substr(0,place+4);*/
  std::cout<<data<<std::endl;
  std::vector<std::string> lines = split('\n',data);
  std::string s = data.substr(data.size()-40,data.size()-1);
  int size = lines.size() - 3;
  double* matrix = new double [size*size];
  for (int kI = 0; kI < size; ++kI) {
    std::vector<std::string> weights = split(',',lines[kI]);
    int weights_size = weights.size();
    for (int kJ = 0; kJ < weights_size; ++kJ) {
      matrix[kI* size + kJ] = std::stod(weights[kJ]);
      std::cout<<matrix[kI* size + kJ]<<" ";
    }

    std::cout<<std::endl;
  }
  Matrix matrix1(matrix,size);
  std::pair<std::string,std::string> p1;
  std::pair<std::string,std::string> p2;
  std::vector<std::string> point1 = split(',',lines[size]);
  size++;
  std::vector<std::string> point2 = split(',',lines[size]);
  p1.first = point1[0];
  p1.second = point1[1];
  p2.first = point2[0];
  p2.second = point2[1];
  ::send(client_socket,s.c_str(),s.size(),0);
  close(client_socket);
}
