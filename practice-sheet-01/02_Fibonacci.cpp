// Find the nth Fibonacci Number using recursion
#include <iostream>

int getFibonacci(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main() {
    for(int i = 0; i <= 5; i++) {
        std::cout << getFibonacci(i) << " ";
    }
    return 0;
}