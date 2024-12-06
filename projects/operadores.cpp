// Los operadores son símbolos que representan una operación entre dos operandos. En C++ existen varios tipos de operadores, como los aritméticos, de asignación, de incremento y decremento, de comparación, lógicos, de bits, entre otros. En este ejemplo se muestran algunos de los operadores más comunes en C++.

#include <iostream>

int main(){

    // Operadores aritméticos
    int a = 10;
    int b = 20;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int division = a / b;
    int modulo = a % b;

    std::cout << "Suma: " << suma << '\n';
    std::cout << "Resta: " << resta << '\n';
    std::cout << "Multiplicacion: " << multiplicacion << '\n';
    std::cout << "Division: " << division << '\n';
    std::cout << "Modulo: " << modulo << '\n';

    // Operadores de asignación
    int x = 10;
    x += 5; // x = x + 5;
    // x -= 5; // x = x - 5;
    x *= 5; // x = x * 5;
    x /= 5; // x = x / 5;
    x %= 5; // x = x % 5;

    std::cout << "X: " << x << '\n';

    // Operadores de incremento y decremento
    int y = 10;
    y++; // y = y + 1;
    y--; // y = y - 1;

    std::cout << "Y: " << y << '\n';

    // Operadores de comparación
    int z = 10;
    int w = 20;

    std::cout << "Z == W: " << (z == w) << '\n'; // Igualdad
    std::cout << "Z != W: " << (z != w) << '\n'; // Desigualdad
    std::cout << "Z > W: " << (z > w) << '\n'; // Mayor que
    std::cout << "Z < W: " << (z < w) << '\n'; // Menor que
    std::cout << "Z >= W: " << (z >= w) << '\n'; // Mayor o igual que
    std::cout << "Z <= W: " << (z <= w) << '\n'; // Menor o igual que

    // Operadores lógicos
    bool verdadero = true;
    bool falso = false;

    std::cout << "Verdadero && Falso: " << (verdadero && falso) << '\n'; // AND
    std::cout << "Verdadero || Falso: " << (verdadero || falso) << '\n'; // OR
    std::cout << "!Verdadero: " << !verdadero << '\n'; // NOT

    // Operadores de bits
    int num1 = 10; // 1010
    int num2 = 20; // 10100

    std::cout << "Num1 & Num2: " << (num1 & num2) << '\n'; // AND
    std::cout << "Num1 | Num2: " << (num1 | num2) << '\n'; // OR
    std::cout << "Num1 ^ Num2: " << (num1 ^ num2) << '\n'; // XOR
    std::cout << "~Num1: " << ~num1 << '\n'; // NOT
    std::cout << "Num1 << 2: " << (num1 << 2) << '\n'; // Desplazamiento a la izquierda
    std::cout << "Num1 >> 2: " << (num1 >> 2) << '\n'; // Desplazamiento a la derecha

    return 0;
}
