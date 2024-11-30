#include "utils.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::_;
using ::testing::ExpectationSet;


TEST(Vec, plus)
{
    int a = 5;
    int b = 6;
	auto result = sum(a, b);
	EXPECT_EQ(result, a + b);
}