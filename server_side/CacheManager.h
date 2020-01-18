//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_CACHEMANAGER_H_
#define EX4_SERVER_SIDE_CACHEMANAGER_H_
#include "Problem.h"
#include "Solution.h"
namespace server_side {
class CacheManager {
  virtual bool is_in_cache(Problem) = 0;
  virtual Solution pull_from_cache(Problem) = 0;
  virtual void add_to_cache(Problem,Solution) = 0;
};
}
#endif //EX4_SERVER_SIDE_CACHEMANAGER_H_
