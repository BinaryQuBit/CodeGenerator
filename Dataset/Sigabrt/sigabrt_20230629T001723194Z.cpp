#include <iostream>

int main() {
    int* ptr = new int[3];
    delete[] ptr;
    delete[] ptr;
    return 0;
}