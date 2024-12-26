cmake_minimum_required(VERSION 3.10)
project(gtest_example)


# Use FetchContent to get a known working version of GTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add system include paths
include_directories(
    /usr/include
    ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}
)

enable_testing()

# Find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add executable
add_executable(test_main test_main.cpp)
target_link_libraries(test_main GTest::GTest GTest::Main)

include(GoogleTest)
gtest_discover_tests(test_main)
