#include <iostream>

int main()
{

    int edad;
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if (edad >= 18 && edad <= 100)
    {
        std::cout << "Eres mayor de edad";
    } else if (edad < 0)
    {
        std::cout << "No puedes tener una edad negativa";
    } else if (edad > 100)
    {
        std::cout << "Eres demasiado mayor";
    } else {
        std::cout << "Eres menor de edad";
    }

    return 0;
}