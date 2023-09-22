
#include "../csum.hpp"
#include <gtest/gtest.h>

using namespace algocpp::numeric;

TEST(numeric_csum, nomal)
{
	int a = 334;
	EXPECT_EQ(csum(a), 10);
}
