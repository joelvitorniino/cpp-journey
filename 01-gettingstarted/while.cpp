#include <iostream>

int main() {
    int sum = 0, val = 1;

    while (val <= 10) {
        sum += val;

        // add 1 to val == val + 1
        ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}