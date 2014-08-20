#ifndef _9_HPP
#define _9_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"

namespace problem9 {
  void solve() {
    uint64_t solution = 0;
    bool found = false;
    for (uint64_t a = 1; a < 998 && !found; ++a) {
      for (uint64_t b = a + 1; b < 999 && !found; ++b) {
        for (uint64_t c = b + 1; c < 1000 && !found; ++c) {
          if ((a*a + b*b) == (c*c) && a + b + c == 1000) {
            std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
            solution = a * b * c;
            found = true;
          }
        }
      }
    }
    std::cout << "solution = " << solution << std::endl;
  }
}

#endif
