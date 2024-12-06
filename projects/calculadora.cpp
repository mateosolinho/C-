#include <iostream>

int main()
{

    double a;
    double b;
    double res;
    char operation;


    std::cout << "\n#################### CALCULADORA ####################" << std::endl;
    std::cout << "\nQue operacion quieres realizar? (1-4)" << std::endl;
    std::cout << "1. Suma (+)" << std::endl;
    std::cout << "2. Resta (-)" << std::endl;
    std::cout << "3. Division (/)" << std::endl;
    std::cout << "4. Multiplicacion (*)" << std::endl;
    std::cin >> operation;

    std::cout << "\nIntroduce el primer numero: " << std::endl;
    std::cin >> a;

    std::cout << "\nIntroduce el segundo numero: " << std::endl;
    std::cin >> b;

    switch (operation)
    {
    case '+':
        res = a + b;
        std::cout << "Resultado de la suma: " << res << std::endl;
        break;
    case '-':
        res = a - b;
        std::cout << "Resultado de la resta: " << res << std::endl;
        break;
    case '/':
        if (b == 0)
        {
            std::cout << "No se puede dividir entre 0" << std::endl;
        }
        else
        {
            res = a / b;
            std::cout << "Resultado de la division: " << res << std::endl;
        }
        break;
    case '*':
        res = a * b;
        std::cout << "Resultado de la multiplicacion: " << res << std::endl;
        break;
    default:
        std::cout << "Introduce un simbolo correcto, debes elegir entre (+ - / *) ";
        break;
    }
}