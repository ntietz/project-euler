#ifndef _7_HPP
#define _7_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"

namespace problem7 {
  void solve() {
    common::LazyPrimeList primes;
    uint32_t solution = primes[10001];
    std::cout << "solution = " << solution << std::endl;
  }
}

#endif
