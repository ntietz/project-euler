#ifndef _6_HPP
#define _6_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"

namespace problem6 {
  void solve() {
    uint64_t solution = 0;

    static const uint64_t MAX = 100;

    uint64_t sum = 0;
    uint64_t sumOfSquares = 0;

    for (uint64_t num = 1; num <= MAX; ++num) {
      sum += num;
      sumOfSquares += (num * num);
    }

    solution = (sum * sum) - sumOfSquares;

    std::cout << "solution = " << solution << std::endl;
  }
}

#endif
