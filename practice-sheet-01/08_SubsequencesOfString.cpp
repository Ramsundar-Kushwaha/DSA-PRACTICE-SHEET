// Print All Subsequences of a String
#include <iostream>
#include <string>

void subsequenceOf(std::string& str, int index, std::string& ans) {
    if (index != 0) std::cout << ans << std::endl;

    for(int i = index; i < str.length(); i++) {
        ans += str[i];
        subsequenceOf(str, i + 1, ans);
        ans.pop_back();
        
    }
}

int main() {
    std::string str = "abc";
    std::string ans = "";

    subsequenceOf(str, 0, ans);

    return 0;
}