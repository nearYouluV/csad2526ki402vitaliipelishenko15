#include <iostream>
#include <cassert>
#include "../math_operations.h"

// Simple test framework functions
void test_add_positive_numbers() {
    int result = add(5, 3);
    assert(result == 8);
    std::cout << "✓ Test add_positive_numbers passed" << std::endl;
}

void test_add_negative_numbers() {
    int result = add(-5, -3);
    assert(result == -8);
    std::cout << "✓ Test add_negative_numbers passed" << std::endl;
}

void test_add_mixed_numbers() {
    int result = add(-5, 10);
    assert(result == 5);
    std::cout << "✓ Test add_mixed_numbers passed" << std::endl;
}

void test_add_zero() {
    int result = add(0, 5);
    assert(result == 5);
    
    result = add(5, 0);
    assert(result == 5);
    
    result = add(0, 0);
    assert(result == 0);
    std::cout << "✓ Test add_zero passed" << std::endl;
}

void test_add_large_numbers() {
    int result = add(1000000, 2000000);
    assert(result == 3000000);
    std::cout << "✓ Test add_large_numbers passed" << std::endl;
}

int main() {
    std::cout << "Running unit tests for math_operations..." << std::endl;
    std::cout << "==========================================" << std::endl;
    
    try {
        test_add_positive_numbers();
        test_add_negative_numbers();
        test_add_mixed_numbers();
        test_add_zero();
        test_add_large_numbers();
        
        std::cout << "==========================================" << std::endl;
        std::cout << "All tests passed! ✓" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cout << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
