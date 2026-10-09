// Compute the  sum of elements in an array recursively
#include <iostream>


int sumOf(int arr[], int n) {
    if(n < 0) {
        return 0;
    }

    return arr[n] + sumOf(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << sumOf(arr, 4) << std::endl;
    return 0;
}