// Count ways to climb stairs

#include <iostream>
#include <vector>
#include <string>

void getStairs(int n, std::vector<int>& path, std::vector<std::vector<int>>& result) {
    if(n == 0) {
        result.push_back(path);
        return;
    }

    if(n < 0) {
        return;
    }

    // Take 1 step
    path.push_back(1);
    getStairs(n - 1, path, result);
    path.pop_back();


    // Take 2 step
    path.push_back(2);
    getStairs(n - 2, path, result);
    path.pop_back();
}

int main() {
    std::vector<int> path;
    std::vector<std::vector<int>> result;

    getStairs(5, path, result);
    for(auto& v : result) {
        for(int p : v) {
            std::cout << p << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}