#include <gtest/gtest.h>

#include "functions.hpp"

TEST(ExponentTests, Zero) {
  EXPECT_DOUBLE_EQ(functions::exp_taylor_200(0.0), 1.0);
}

TEST(ExponentTests, One) {
  const double result = functions::exp_taylor_200(1.0);
  constexpr double expected = 2.7182818284590452353602874713527;
  EXPECT_DOUBLE_EQ(result, expected);
}

TEST(ExponentTests, Thirty) {
  const double result = functions::exp_taylor_200(30.0);
  constexpr double expected = 1.068647458152446214699046865074e13;
  EXPECT_DOUBLE_EQ(result, expected);
}
