#include <iostream>

int main() {
    float a, b;

    // Solicita ao usuário para inserir os números
    std::cout << "Digite o valor de A: ";
    std::cin >> a;

    std::cout << "Digite o valor de B: ";
    std::cin >> b;

    // Realiza as operações e exibe os resultados
    std::cout << "Soma: " << a + b << std::endl;
    std::cout << "Subtração: " << a - b << std::endl;
    std::cout << "Multiplicação: " << a * b << std::endl;
    
     if (b != 0.0f) {
        std::cout << "Divisão: " << a / b << std::endl;
    } else {
        std::cout << "Não é possível dividir por zero." << std::endl;
    }

    return 0;
}
