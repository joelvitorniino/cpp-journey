#include <iostream>

int main() {
    // console.log do JS
    // std::endl -> inclui quebra de linha como '\n' e dar um flush do buffer, para que mostre o texto na tela.
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;

    // scanf no C
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}