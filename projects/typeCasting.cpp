// El typedef se usa para crear un alias de un tipo de dato, es decir, para asignarle un nombre diferente a un tipo de dato existente. Para crear un alias de un tipo de dato se usa la palabra clave typedef seguida del tipo de dato y del nombre del alias.


#include <iostream>

int main() {

    double x = (int)3.14; // Hacemos un cast de un double a un int por lo que se perderán los decimales

    x = x + 1.5; // Sumamos 1.5 y vemos que se imprime 4.5

    std::cout << x << std::endl;

    // ==================================================

    char c = 100; // Se imprime la letra 'd' ya que 100 en ASCII es la letra 'd'

    std::cout << (int)c << std::endl; // Se imprime el valor ASCII de la letra 'd'

    std::cout << (char)100 << std::endl; // Se imprime la letra 'd'

    // ==================================================

    int Pcorrecta = 8;
    int Ptotal = 10;

    // Caso Erroneo

    double puntaje = Pcorrecta / Ptotal * 100; // Se imprime 80.0 ya que se hace la división de dos enteros y el resultado es un entero

    std::cout << puntaje << "%" << std::endl; // Imprime 0% ya que se hace la división de dos enteros y el resultado es un entero -> 8 / 10 = 0.8 -> 0.8

    // Casso Correcto

    double puntajeCorrecto = (double)Pcorrecta / Ptotal * 100; // Se imprime 80.0 ya que se hace la división de dos enteros y el resultado es un entero

    std::cout << puntajeCorrecto << "%" << std::endl; // Imprime 80% ya que se hace la división de dos enteros y el resultado es un entero -> 8 / 10 = 0.8 -> 0.8

    return 0;
}