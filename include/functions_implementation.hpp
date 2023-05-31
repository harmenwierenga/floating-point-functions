#ifndef FLOATING_POINT_FUNCTIONS_INCLUDE_FUNCTIONS_IMPLEMENTATION_HPP
#define FLOATING_POINT_FUNCTIONS_INCLUDE_FUNCTIONS_IMPLEMENTATION_HPP

#include <cstdint>

namespace functions {
namespace implementation {
template <int32_t NUMBER_OF_ITERATIONS>
[[nodiscard]] double taylor_exp(const double exponent) {
  double term = 1.0;
  double result = term;
  for (int32_t iteration = 1; iteration < NUMBER_OF_ITERATIONS; ++iteration) {
    term *= exponent / iteration;
    result += term;
  }
  return result;
}
}  // namespace implementation
}  // namespace functions
#endif  // FLOATING_POINT_FUNCTIONS_INCLUDE_FUNCTIONS_IMPLEMENTATION_HPP
