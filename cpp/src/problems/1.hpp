#ifndef _1_HPP_
#define _1_HPP_

#include <iostream>
#include <cstdint>

namespace problem1 {
  void solve() {
    uint32_t sum = 0;

    static const uint32_t MAX = 1000;
    for (uint32_t num = 0; num < MAX; ++num) {
      if (num % 3 == 0 || num % 5 == 0) {
        sum += num;
      }
    }

    std::cout << "sum = " << sum << std::endl;
  }
}

#endif
