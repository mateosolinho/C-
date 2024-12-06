#include <iostream>

int main()
{
    // Las constantes son variables que no pueden cambiar su valor una vez que se les ha asignado, es decir, son variables de solo lectura. En C++ se pueden declarar constantes de dos formas:
    // 1. Usando la palabra clave const.
    // 2. Usando la palabra clave #define. (No se usa)

    // La diferencia entre ambas es que las constantes definidas con la palabra clave const son más seguras que las definidas con la palabra clave define, ya que las primeras son verificadas por el compilador, mientras que las segundas no.
    // Esto quiere decir que si se intenta modificar una constante definida con la palabra clave const, el compilador generará un error, mientras que si se intenta modificar una constante definida con la palabra clave define, el compilador no generará ningún error y el programa se comportará de forma inesperada.


    // Constantes con la palabra clave const
    const double PI = 3.14159; // Se recomienda que los nombres de las constantes se escriban en mayúsculas.
    // PI = 350; // Error: no se puede modificar una constante.
    double radio = 10;
    double circunferencia = 2 * PI * radio;

    std::cout << circunferencia << " centimetros";

    return 0;
}