#include <iostream>  // For input/output
#include <algorithm> // For std::swap

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    std::swap(a, b); // Swapping the values of a and b

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}