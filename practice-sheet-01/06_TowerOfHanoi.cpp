// Print the steps to move n disks from source to destination using auxilary rot
#include <iostream>

void towerOfHanoi(int plates, char source, char medium, char destination) {
    if(plates <= 0) {
        return;
    }

    towerOfHanoi(plates - 1, source, destination, medium);
    std::cout << "Move disk " << plates << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(plates - 1, medium, source, destination);
}

int main() {
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}