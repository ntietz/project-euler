#ifndef _2_HPP_
#define _2_HPP_

#include <iostream>
#include <cstdint>

namespace problem2 {
  void solve() {
    uint32_t sum = 0;

    uint32_t a = 1;
    uint32_t b = 2;

    static const uint32_t MAX = 4000000;
    while (b <= MAX) {
      if (b % 2 == 0) {
        sum += b;
      }

      b = a + b;
      a = b - a;
    }

    std::cout << "sum = " << sum << std::endl;
  }
}

#endif
