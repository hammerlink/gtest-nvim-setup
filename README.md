# Neovim GTest Demo

This repository demonstrates how to set up and use Google Test (GTest) with Neovim using the neotest-gtest plugin.

## Prerequisites

- Neovim
- CMake
- GTest
- [neotest](https://github.com/nvim-neotest/neotest)
- [neotest-gtest](https://github.com/alfaix/neotest-gtest)

## Project Structure

```
.
├── src/
│   └── test_main.cpp    # Test file
├── CMakeLists.txt       # CMake configuration
└── setup.sh            # Build script
```

## Setup

1. Clone this repository
2. Run the setup script to build the test executable:
   ```bash
   ./setup.sh
   ```

## Using with Neovim

1. Open your test file in Neovim
2. Mark the tests you want to run using neotest
3. Configure neotest-gtest by executing:
   ```vim
   :ConfigureGtest
   ```
4. Select the test executable from the `build` directory

## How It Works

This demo shows how to:
- Set up a basic C++ project with Google Test
- Configure CMake to build test executables
- Integrate with neotest-gtest in Neovim

The setup script creates the necessary build files and executable that neotest-gtest needs to run the tests.

## Important Notes

- Make sure your test files are properly detected by marking them in neotest
- The test executable must be manually selected through `:ConfigureGtest` command
- Test files are located in the `src` directory
- Build artifacts are stored in the `build` directory

## Troubleshooting

If tests are not being detected:
1. Ensure the test executable was built successfully
2. Verify that you've selected the correct test executable using `:ConfigureGtest`
3. Make sure your test files are properly marked in neotest

## Contributing

Feel free to submit issues and enhancement requests!

## License

[MIT License](LICENSE)
