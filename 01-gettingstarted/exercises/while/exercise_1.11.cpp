/*
Write a program that prompts the user for two integers. Print each
number in the range specified by those two integers.
*/

#include <iostream>

int main() {
    std::cout << "Enter two numbers " << std::endl;

    int n1 = 0, n2;
    std::cin >> n1 >> n2;

    if (n1 <= n2) {
        while (n1 <= n2) {
            std::cout << n1 << std::endl;
            ++n1;
        }
    } else {
        while (n2 <= n1) {
            std::cout << n2 << std::endl;

            ++n2;
        }
    }

    return 0;
}