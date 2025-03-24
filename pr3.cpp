#include <iostream>

int main() {
    int a, b, temp;

    // Taking input
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    // Displaying swapped values
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}

