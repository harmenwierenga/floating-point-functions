#include "functions.hpp"

#include <algorithm>
#include <array>
#include <cstdint>

namespace functions {
double exp(double exponent) {
  constexpr int32_t numberOfIterations = 100;
  double term = 1.0;
  double result = term;
  for (int32_t iteration = 1; iteration < numberOfIterations; ++iteration) {
    term *= exponent / iteration;
    result += term;
  }
  return result;
}
}  // namespace functions
