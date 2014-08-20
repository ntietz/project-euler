#ifndef _10_HPP
#define _10_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"

namespace problem10 {
  void solve() {
    common::LazyPrimeList primes;
    uint64_t solution = 0;
    for (uint64_t idx = 0; idx < 2000000; ++idx) {
      if (common::isPrime(idx)) {
        solution += idx;
      }
    }
    std::cout << "solution = " << solution << std::endl;
  }
}

#endif
