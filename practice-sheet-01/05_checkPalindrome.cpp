// check if a string is palindrome using recursion
#include <iostream>

bool isPalindrome(std::string str, int left, int right) {
    if(left >= right) {
        return true;
    }
    
    if(str[left] != str[right]) {
        return false;
    }

    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    std::cout << isPalindrome("ramars", 0, 5);
    return 0;
}