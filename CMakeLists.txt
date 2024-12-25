cmake_minimum_required(VERSION 3.10)
project(gtest_example)

# Enable testing
enable_testing()

# Find GTest package
find_package(GTest REQUIRED)

# Add executable
add_executable(test_main test_main.cpp)

# Link against GTest
target_link_libraries(test_main GTest::GTest GTest::Main)

# Add test
add_test(NAME test_main COMMAND test_main)
