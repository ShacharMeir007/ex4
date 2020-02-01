//
// Created by shachar Meir on 18/01/2020.
//

#ifndef EX4_SERVER_SIDE_CACHEMANAGER_H_
#define EX4_SERVER_SIDE_CACHEMANAGER_H_

namespace server_side {
template< typename P, typename S>
class CacheManager {
 public:
  virtual bool is_in_cache(P) = 0;
  virtual S pull_from_cache(P) = 0;
  virtual void add_to_cache(P,S) = 0;

};
}
#endif //EX4_SERVER_SIDE_CACHEMANAGER_H_
