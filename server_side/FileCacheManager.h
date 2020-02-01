//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_FILECACHEMANAGER_H_
#define EX4_SERVER_SIDE_FILECACHEMANAGER_H_
#include "CacheManager.h"
#include <string>
#include <fstream>
#include <iostream>
namespace server_side {
template<typename P,typename S>
class FileCacheManager : public CacheManager<P,S> {
  unsigned long name_hash(P p) {
    std::hash<std::string> hash;
    //std::string name = std::to_string(p);
    unsigned long hashed = hash(p);
    return hashed;
  }
  bool is_in_cache(P p) override {
    unsigned long name = name_hash(p);
    std::ifstream f(std::to_string(name));
    return f.good();
  }
  S pull_from_cache(P p) override {
    unsigned long name = name_hash(p);
    std::fstream in_file;
    S obj;
    in_file.open(std::to_string(name), std::ios::in|std::ios::binary);
    if (!in_file.is_open()) {
      throw "no file";
    }
    in_file.read((char*)&obj, sizeof(S));
    in_file.close();
    return obj;
  }
  void add_to_cache(P p, S s) override {
    unsigned long name = name_hash(p);
    std::fstream out_file(std::to_string(name));
    out_file.open(std::to_string(name), std::ios::out|std::ios::binary);
    if (!out_file.is_open()) {
      throw "no file";
    }
    out_file.write((char*)&s, sizeof(S));
    out_file.close();
  }
};
}
#endif //EX4_SERVER_SIDE_FILECACHEMANAGER_H_
