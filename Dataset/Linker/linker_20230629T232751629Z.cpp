#include <iostream>

int main() {
    int x = 10;
    int* ptr = &x;
    *ptr = 20;
    std::cout << "Value of x: " << x << std::endl; // Linker error: multiple definitions of 'x'
    return 0;
}