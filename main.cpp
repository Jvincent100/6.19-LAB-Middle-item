#include <iostream>
#include <vector>

int main() {
    const int MAX_SIZE = 9; // Maximum number of list values
    std::vector<int> integers;

    // Read the integers into a vector
    int num;
    while (std::cin >> num && num >= 0) {
        integers.push_back(num);

        // Check if the number of items exceeds the maximum
        if (integers.size() > MAX_SIZE) {
            std::cout << "Too many numbers" << std::endl;
            return 0;
        }
    }

    // Find and output the middle item
    int middleIndex = integers.size() / 2;
    std::cout << "Middle item: " << integers[middleIndex] << std::endl;

    return 0;
}
