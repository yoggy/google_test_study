#include <gtest/gtest.h>

#include "sample_class.h"

TEST(TestGroupName, Test01)
{
	SampleClass sample;
	ASSERT_EQ(0, sample.value());

	sample.add(1);
	ASSERT_EQ(1, sample.value());

	sample.add(2);
	ASSERT_EQ(3, sample.value());
}

TEST(TestGroupName, Test02)
{
	// see also
	// http://opencv.jp/googletestdocs/primer.html
	// http://opencv.jp/googletestdocs/advancedguide.html#advancedguide

	// bool
	bool b0 = true, b1 = false;
	ASSERT_TRUE(b0);
	ASSERT_FALSE(b1);

	// int
	int n = 1;
	ASSERT_EQ(1, n);

	const char *str = "testtesttest";
	ASSERT_STREQ("testtesttest", str);

	// float
	float f = 0;
	for (int i = 0; i < 10000; ++i) {
		f += 0.1;
	}
	std::cout << f << std::endl;
	ASSERT_NEAR(1000.0f, f, 0.1f);
}

int main(int argc, char * argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
