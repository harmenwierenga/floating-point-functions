#include "functions.hpp"

#include <gtest/gtest.h>

TEST(ExponentTests, Zero)
{
    EXPECT_DOUBLE_EQ(functions::exp(0.0), 1.0);
}

TEST(ExponentTests, One)
{
    EXPECT_DOUBLE_EQ(functions::exp(1.0), 2.7182818284590452353602874713527); 
}
