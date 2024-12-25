#include <gtest/gtest.h>

// Simple function to test
int Add(int a, int b) { return a + b; }

// Test case
TEST(AddTest, PositiveNumbers) {
  EXPECT_EQ(Add(2, 3), 5);
  // EXPECT_THAT(Add(3, 3), ::testing::Eq(6));
}

// Main function that runs the tests
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
