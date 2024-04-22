#include <cassert>
#include "easyfind.hpp"
#include <iostream>

int main() {
    // Test 1: Find an element in a vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    std::cout << "number found: " << easyfind(vec, 3) << std::endl;

    // Test 2: Find an element not in a vector
    try {
        easyfind(vec, 6);
    } catch (const EasyFindException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "All tests passed!\n";
    return 0;
}