cmake_minimum_required(VERSION 3.10)
project(gtest_example)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set C++ standard before any targets
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Use FetchContent to get GTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add source directories
include_directories(${CMAKE_SOURCE_DIR}/src)

# Add executable
add_executable(test_main src/test_main.cpp)
target_link_libraries(test_main GTest::GTest GTest::Main)

include(GoogleTest)
gtest_discover_tests(test_main)
