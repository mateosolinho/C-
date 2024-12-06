#include <iostream>
#include <cmath> // Se incluye la librería cmath para poder usar las funciones matemáticas

int main(){

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // Esta función devuelve el valor máximo entre dos números -> 4
    z = std::min(x, y); // Esta función devuelve el valor mínimo entre dos números -> 3
    z = std::pow(2, 4); // Esta función devuelve el valor de x elevado a la potencia de y -> 2^4 = 16
    z = std::sqrt(25); // Esta función devuelve la raíz cuadrada de x -> 25 = 5
    z = std::abs(-5); // Esta función devuelve el valor absoluto de x -> -5 = 5
    z = std::round(4.5); // Esta función redondea el número al entero más cercano -> 4.5 = 5
    z = std::ceil(4.1); // Esta función redondea el número al entero más cercano hacia arriba -> 4.1 = 5
    z = std::floor(4.9); // Esta función redondea el número al entero más cercano hacia abajo -> 4.9 = 4

    // cplusplus.com/reference/cmath/ -> Para más funciones matemáticas

    return 0;
}