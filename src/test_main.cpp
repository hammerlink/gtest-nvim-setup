#include <gtest/gtest.h>

int Add(int a, int b) { return a + b; }

TEST(AddTest, PositiveNumbers) {
  EXPECT_EQ(Add(2, 3), 5);
  EXPECT_EQ(Add(0, 0), 0);
}

TEST(AddTest, NegativeNumbers) {
  EXPECT_EQ(Add(-1, -1), -3);
  EXPECT_EQ(Add(-1, 1), 0);
}
