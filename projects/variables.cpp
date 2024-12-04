#include <iostream>

int main()
{
    // Declaración de variables
    int numero1;
    int numero2;
    double double1;
    double double2;
    float float1;
    float float2;
    char letra;
    bool booleano;
    std::string cadena;

    // Asignación de valores a las variables
    numero1 = 10;
    numero2 = 20;
    double1 = 1.34735252434;
    double2 = 7.237263452525;
    float1 = 3.1423;
    float2 = 2.7134;
    letra = 'A';
    booleano = true;
    cadena = "Esto es una cadena";

    // Operaciones
    int suma = numero1 + numero2;
    float sumaFloats = float1 + float2;
    float sumaDoubles = double1 + double2;

    // Impresión de variables
    std::cout << "Numero: " << numero1 << '\n';
    std::cout << "Decimal: " << float1 << '\n';
    std::cout << "Letra: " << letra << '\n';
    std::cout << "Booleano: " << booleano << '\n';
    std::cout << "Suma: " << suma << '\n';
    std::cout << "Suma Floats: " << sumaFloats << std::endl;
    std::cout << "Suma Doubles: " << sumaDoubles << std::endl; // Si no salen los decimales depende del IDE, los decimales que no se muestran se redondean
    std::cout << "String: " << cadena << '\n';
    std::cout << "String: " << cadena << "\nSuma: " << suma << '\n';

    return 0;
}

/*
    === Diferencia entre Double y Float ===

    Ambos hacen exactamente lo mismo

    Float usa 32bit y puede almacenar hasta 7 decimales
    Double usa 64bit y puede almacenar hasta 15 decimales

    Además a la hora de procesar números de gran tamaño hay un gran margen de error en los Floats

    En el caso de que los números sean más grandes de lo que puede almacenar incluso un Double, se puede usar un Long Double que usa 80bit y puede almacenar hasta 19 decimales

*/ 