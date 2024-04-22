//
// Created by fvon-nag on 04.03.24.
//#include <iostream>
#include <iostream>
#include "Array.h"

void testArray() {
    // Test with int
    Array<int> a(5);
    if (a.size() != 5) {
        std::cout << "Size constructor test failed for int array." << std::endl;
    }

    // Test copy constructor
    Array<int> copy_a(a);
    if (copy_a.size() != a.size()) {
        std::cout << "Copy constructor test failed for int array." << std::endl;
    }

    // Test assignment operator
    Array<int> assign_a;
    assign_a = a;
    if (assign_a.size() != a.size()) {
        std::cout << "Assignment operator test failed for int array." << std::endl;
    }

    // Test with double
    Array<double> b(5);
    if (b.size() != 5) {
        std::cout << "Size constructor test failed for double array." << std::endl;
    }

    // Test copy constructor
    Array<double> copy_b(b);
    if (copy_b.size() != b.size()) {
        std::cout << "Copy constructor test failed for double array." << std::endl;
    }

    // Test assignment operator
    Array<double> assign_b;
    assign_b = b;
    if (assign_b.size() != b.size()) {
        std::cout << "Assignment operator test failed for double array." << std::endl;
    }

    // Test with char
    Array<char> c(5);
    if (c.size() != 5) {
        std::cout << "Size constructor test failed for char array." << std::endl;
    }

    // Test copy constructor
    Array<char> copy_c(c);
    if (copy_c.size() != c.size()) {
        std::cout << "Copy constructor test failed for char array." << std::endl;
    }

    // Test assignment operator
    Array<char> assign_c;
    assign_c = c;
    if (assign_c.size() != c.size()) {
        std::cout << "Assignment operator test failed for char array." << std::endl;
    }

    // Test with std::string
    Array<std::string> d(5);
    d[4] = "test";
    if (d.size() != 5) {
        std::cout << "Size constructor test failed for std::string array." << std::endl;
    }

    // Test copy constructor
    Array<std::string> copy_d(d);
    if (copy_d.size() != d.size()) {
        std::cout << "Copy constructor test failed for std::string array." << std::endl;
    }

    // Test assignment operator
    Array<std::string> assign_d;
    assign_d = d;
    if (assign_d.size() != d.size()) {
        std::cout << "Assignment operator test failed for std::string array." << std::endl;
    }

    // Test out of bounds exception
    try {
        a[10] = 5;
        std::cout << "Out of bounds exception test failed for int array." << std::endl;
    } catch (const Array<int>::OutOfBoundsException& e) {
        // Expected exception
    }

    try {
        b[10] = 5.0;
        std::cout << "Out of bounds exception test failed for double array." << std::endl;
    } catch (const Array<double>::OutOfBoundsException& e) {
        // Expected exception
    }

    try {
        c[10] = 'a';
        std::cout << "Out of bounds exception test failed for char array." << std::endl;
    } catch (const Array<char>::OutOfBoundsException& e) {
        // Expected exception
    }

    try {
        d[10] = "test";
        std::cout << "Out of bounds exception test failed for std::string array." << std::endl;
    } catch (const Array<std::string>::OutOfBoundsException& e) {
        // Expected exception
    }

    std::cout << "All tests passed." << std::endl;
    std::cout << d[4] << std::endl;
    d[4] = "test2";
    std::cout << d[4] << std::endl;
}

int main() {
    testArray();
    return 0;
}