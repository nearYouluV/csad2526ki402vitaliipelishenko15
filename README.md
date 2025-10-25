# csad2226ki42vitaliipelishenko15

A simple C++ project demonstrating basic mathematical operations with unit testing using CMake.

## Project Structure

```
├── main.cpp              # Main application entry point
├── math_operations.h     # Header file with function declarations
├── math_operations.cpp   # Implementation of mathematical operations
├── tests/
│   └── unit_tests.cpp    # Unit tests for math operations
├── CMakeLists.txt        # CMake build configuration
└── README.md            # This file
```

## Prerequisites

- C++ compiler (g++ recommended)
- CMake (version 3.10 or higher)
- Make (for building)

## Building the Project

1. **Create a build directory:**
   ```bash
   mkdir build
   cd build
   ```

2. **Generate build files:**
   ```bash
   cmake ..
   ```

3. **Build the project:**
   ```bash
   make
   ```
   
   Or alternatively:
   ```bash
   cmake --build .
   ```

## Running the Application

After building, run the main application:

```bash
./bin/HelloWorld
```

## Running Tests

### Method 1: Direct Execution
Run the test executable directly:
```bash
./bin/unit_tests
```

### Method 2: Using CMake Test Framework
Run tests through CMake's testing framework:
```bash
ctest
```

Or with verbose output:
```bash
ctest --verbose
```

### Method 3: Using Make
```bash
make test
```

## Test Coverage

The unit tests cover the following scenarios for the `add` function:
- ✓ Adding positive numbers
- ✓ Adding negative numbers  
- ✓ Adding mixed positive/negative numbers
- ✓ Adding with zero
- ✓ Adding large numbers

## Development

### Adding New Functions
1. Add function declaration to `math_operations.h`
2. Implement function in `math_operations.cpp`
3. Add corresponding tests in `tests/unit_tests.cpp`
4. Rebuild the project

### Build Types
- **Debug** (default): Includes debugging information and warnings
- **Release**: Optimized for performance

To build in release mode:
```bash
cmake -DCMAKE_BUILD_TYPE=Release ..
make
```

## Author
Vitalii Pelishenko
