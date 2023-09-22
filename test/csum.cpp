
#include "../csum.hpp"
#include <gtest/gtest.h>
#include <string>

using namespace algocpp::numeric;

TEST(numeric_csum, nomal)
{
	int a = 334;
	EXPECT_EQ(csum(a), 10);
}

TEST(numeric_csum, string)
{
	std::string tmp = "1";
	for (int i = 1; i <= 10000; ++i)
	{
		tmp += "1";
		EXPECT_EQ(csum(tmp), i + 1);
	}
}
