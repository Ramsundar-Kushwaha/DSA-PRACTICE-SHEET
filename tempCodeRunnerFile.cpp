// Compute x ^ n recursively
#include <iostream>

int getPower(int coff, int exp) {
    if(exp == 0) {
        return 1;
    }

    return coff * getPower(coff, exp - 1);
}

int main() {
    std::cout << getPower(2, 0);

    return 0;
}