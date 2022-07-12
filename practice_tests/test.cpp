#include "pch.h"
#include "../practice/practice.c"

TEST(CorrectTest, Incorrect) {
  EXPECT_EQ(correct(25, 53), -1);
  EXPECT_EQ(correct(05, -36), -1);
  EXPECT_EQ(correct(68, 11), -1);
  EXPECT_EQ(correct(-12, 77), -1);
}
TEST(CorrectTest, Correct) {
	EXPECT_EQ(correct(10, 58), 1);
	EXPECT_EQ(correct(15, 00), 1);
	EXPECT_EQ(correct(03, 27), 1);
}

TEST(ConvertTest, Hours) {
	char hour_res[20] = ""; 
	convert(15, hour_res);
	EXPECT_STREQ(hour_res, "п'€тнадц€ть");
}

TEST(ConvertTest, Minutes) {
	char min_res[20] = "";
	convert(0, min_res);
	EXPECT_STREQ(min_res, "нуль");
}

TEST(ConvertTest, Endings) {
	const char ending_arr[] = { '\0', 'а', 'и' };
	int ending = 0;
	char hour_res[20] = ""; 
	ending = convert(23, hour_res);
	EXPECT_EQ(ending_arr[ending], 'и');
}

