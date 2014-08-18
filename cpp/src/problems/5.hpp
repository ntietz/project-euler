#ifndef _5_HPP
#define _5_HPP

#include <iostream>
#include <cstdint>
#include "common/primes.hpp"
#include <map>

namespace problem5 {
  void solve() {
    std::map<uint64_t,uint64_t> maxFactors;
    std::vector<uint64_t> divisors;
    uint64_t solution = 1;

    static const uint32_t MAX = 20;
    for (uint32_t num = 2; num <= MAX; ++num) {
      std::vector<std::pair<uint64_t,uint64_t> > factors = common::getPrimeFactors(num);
      for (uint32_t idx = 0; idx < factors.size(); ++idx) {
        uint64_t d = factors[idx].first;
        if (maxFactors.find(d) != maxFactors.end()) {
          maxFactors[d] = std::max(maxFactors[d], factors[idx].second);
        } else {
          maxFactors[d] = factors[idx].second;
          divisors.push_back(d);
        }
      }
    }

    for (uint32_t idx = 0; idx < divisors.size(); ++idx) {
      uint64_t d = divisors[idx];
      solution *= (common::power(d, maxFactors[d]));
    }

    std::cout << "solution = " << solution << std::endl;
  }
}

#endif
