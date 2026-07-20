#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    // Invalido por que voce nao pode concatenar essa declaracao, quando voce finaliza a clausula com o ;
    //std::cout << "The sum of " << v1;
    //          << " and " << v2;
    //          << " is " << v1 + v2 << std::endl;

    // Correcao abaixo:
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}