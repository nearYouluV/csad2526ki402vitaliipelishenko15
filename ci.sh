#!/bin/bash

# CI/CD Script for C++ Project
# This script builds the project and runs tests

set -e  # Exit on any error

echo "=========================================="
echo "Starting CI/CD Pipeline"
echo "=========================================="

# Step 1: Create build directory
echo "Creating build directory..."
mkdir -p build

# Step 2: Navigate to build directory
echo "Navigating to build directory..."
cd build

# Step 3: Generate build files with CMake
echo "Generating build files with CMake..."
cmake ..

# Step 4: Build the project
echo "Building the project..."
cmake --build .

# Step 5: Make build script executable (if it exists)
if [ -f "build.sh" ]; then
    echo "Making build.sh executable..."
    chmod +x build.sh
fi

echo "=========================================="
echo "Build completed successfully!"
echo "=========================================="

# Step 6: Run tests using CTest
echo "Running tests with CTest..."
echo "=========================================="

if ctest --output-on-failure; then
    echo "=========================================="
    echo "✅ All tests passed!"
    echo "=========================================="
else
    echo "=========================================="
    echo "❌ Some tests failed!"
    echo "=========================================="
    exit 1
fi

echo "CI/CD Pipeline completed successfully! 🎉"
