#ifndef _PRIMES_HPP_
#define _PRIMES_HPP_

#include <cstdint>
#include <vector>

namespace common {

  bool isPrime(uint64_t num) {
    if (num % 2 == 0) return false;
    for (uint64_t d = 3; d*d < num; d += 2) {
      if (num % d == 0) return false;
    }
    return true;
  }

  std::vector<std::pair<uint64_t,uint64_t> > getPrimeFactors(uint64_t num) {
    std::vector<std::pair<uint64_t,uint64_t> > factorMap;

    uint32_t power = 0;

    while (num % 2 == 0) {
      power += 1;
      num >>= 1;
    }
    
    if (power >= 1) {
      factorMap.push_back(std::pair<uint64_t,uint64_t>(2,power));
      power = 0;
    }

    uint64_t d = 3;
    while (num > 1) {
      while (num % d == 0) {
        power += 1;
        num /= d;
      }

      if (power >= 1) {
        factorMap.push_back(std::pair<uint64_t,uint64_t>(d,power));
        power = 0;
      }

      d += 2;
    }
    return factorMap;
  }

  void printPrimeFactors(uint64_t num) {
    std::vector<std::pair<uint64_t,uint64_t> > factors = getPrimeFactors(num);

    for (uint32_t idx = 0; idx < factors.size(); ++idx) {
      std::cout << factors[idx].first << " ^ " << factors[idx].second << std::endl;
    }
  }

  uint64_t power(uint64_t n, uint64_t p) {
    uint64_t x = 1;
    while (p > 0) {
      x *= n;
      p -= 1;
    }
    return x;
  }

  bool isPalindromic(uint32_t num) {
    uint32_t numDigits = 1;
    uint32_t powerOf10 = 10;

    while (num >= powerOf10) {
      powerOf10 *= 10;
      ++numDigits;
    }

    while (numDigits > 1) {
      uint32_t lower10 = 10;
      uint32_t upper10 = powerOf10 / 10;

      uint32_t lastDigit = (num % lower10);
      uint32_t firstDigit = (num / upper10);

      if (lastDigit != firstDigit) {
        return false;
      }

      num = (num - upper10 * firstDigit) / 10;
      numDigits -= 2;
      powerOf10 /= 100;
    }
    return true;
  }

}

#endif
