// Print all permutation of given string recursively
#include <iostream>
#include <string>
#include <vector>

void permutationOf(std::string& str, std::vector<bool>& status, std::string& ans) {
    if(ans.length() == str.length()) {
        std::cout << ans << std::endl;
        return;
    }

    for(int i = 0; i < str.length(); i++) {
        if(status[i]) {
            continue;
        }

        ans += str[i];
        status[i] = true;

        permutationOf(str, status, ans);

        status[i] = false;
        ans.pop_back();
    }
}

int main() {
    std::string str = "abc";
    std::vector<bool> status(str.length(), false);
    std::string ans = "";
    permutationOf(str, status, ans);

    return 0;
}