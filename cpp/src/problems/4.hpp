#ifndef _4_HPP
#define _4_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"

namespace problem4 {
  void solve() {
    uint32_t maxPalindrome = 0;
    for (uint32_t i = 100; i < 1000; ++i) {
      for (uint32_t j = i; j < 1000; ++j) {
        uint32_t product = i * j;
        if (common::isPalindromic(product) && product > maxPalindrome) {
          maxPalindrome = product;
        }
      }
    }
    std::cout << "max = " << maxPalindrome << std::endl;
  }
}

#endif
