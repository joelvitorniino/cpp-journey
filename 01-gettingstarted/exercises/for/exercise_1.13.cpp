#include <iostream>

// Write a program that uses a while to sum the numbers from 50 to 100. using __cpp_range_based_for
void sum50To100() {
    int sum = 0;
    for (int val = 50; val <= 100; ++val) {
        sum += val;

        ++val;
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}

// Write a program with (--) that prints the numbers from ten down to zero
void tenToZero() {
    for (int val = 10; val >= 0; --val) {
        std::cout << val << std::endl;
    }
}

/*
Write a program that prompts the user for two integers. Print each
number in the range specified by those two integers.
*/
void rangeTwoInt() {
    std::cout << "Enter two numbers " << std::endl;

    int n1 = 0, n2;
    std::cin >> n1 >> n2;

    if (n1 <= n2) {
        for (; n1 <= n2; ++n1) {
            std::cout << n1 << std::endl;
        }
    } else {
        for (; n2 <= n1; ++n2) {
            std::cout << n2 << std::endl;
        }
    }
}

int main() {
    sum50To100();
    tenToZero();
    rangeTwoInt();

    return 0;
}