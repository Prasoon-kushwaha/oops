#include <iostream>

int main() {
    int x = 10;
    int y = 20;
    int z = 30;

    // Using nested ternary operators to find the maximum value among x, y, and z
    int max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    std::cout << "The maximum value is: " << max << std::endl;

    return 0;
}
