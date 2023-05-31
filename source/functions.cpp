#include "functions.hpp"

#include "functions_implementation.hpp"

namespace functions {
double exp_taylor_200(const double exponent) {
  return implementation::taylor_exp<200>(exponent);
}
}  // namespace functions
