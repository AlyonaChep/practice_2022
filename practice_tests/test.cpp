#include "pch.h"
#include "../practice/practice.c"

TEST(CorrectTest, IncorrectHours) {
  EXPECT_EQ(correct(25, 53), -1);
  EXPECT_EQ(correct(-5, 26), -1);
  EXPECT_EQ(correct(68, 11), -1);
}

TEST(CorrectTest, IncorrectMinutes) {
	EXPECT_EQ(correct(12, 68), -1);
	EXPECT_EQ(correct(05, -36), -1);
	EXPECT_EQ(correct(22, 89), -1);
}

TEST(CorrectTest, BothIncorrect) {
	EXPECT_EQ(correct(26, 86), -1);
	EXPECT_EQ(correct(93, -6), -1);
	EXPECT_EQ(correct(-12, 77), -1);
}

TEST(CorrectTest, BothCorrect) {
	EXPECT_EQ(correct(10, 58), 1);
	EXPECT_EQ(correct(15, 00), 1);
	EXPECT_EQ(correct(03, 27), 1);
}

