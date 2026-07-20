/*
Write your own version of a program that prints the sum of a set of
integers read from cin.
*/

#include <iostream>

int main() {
    int sum = 0, value;

    while (std::cin >> value) {
        sum += value;

        if (value == 0) {
            std::cout << "Sum is " << sum << std::endl;
        }
    }

    return 0;
}