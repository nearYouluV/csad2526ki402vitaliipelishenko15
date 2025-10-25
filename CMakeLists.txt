cmake_minimum_required(VERSION 3.10)

# Set the project name
project(HelloWorld)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add compiler flags for debugging
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

# Set default build type to Debug if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Add the executable
add_executable(${PROJECT_NAME} main.cpp math_operations.cpp)

# Optional: Set output directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Enable testing
enable_testing()

# Add test executable
add_executable(unit_tests tests/unit_tests.cpp math_operations.cpp)

# Set output directory for test executable
set_target_properties(unit_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Add test
add_test(NAME UnitTests COMMAND unit_tests)
