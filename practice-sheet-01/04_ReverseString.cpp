// Reverse a given string recursively
#include <iostream>

std::string reverse(std::string str, int i, std::string& ans) {
    if(i < 0) {
        return ans;
    }

    ans += str[i];
    return reverse(str, i - 1, ans);
}

int main() {
    std::string ans = "";
    std::string name = "ramsundar";
    std::cout << reverse(name, name.length() - 1, ans);
    return 0;
}