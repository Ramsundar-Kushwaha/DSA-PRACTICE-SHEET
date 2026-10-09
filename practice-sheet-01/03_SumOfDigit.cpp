// Compute the sum of digits of a given number using recursion.
#include <iostream>

int sumOfDigit(int num) {

    if(num == 0) {
        return 0;
    }
    
    return (num % 10) + sumOfDigit(num / 10);
}


int main() {
    std::cout << sumOfDigit(1234) << std::endl;
    return 0;
}