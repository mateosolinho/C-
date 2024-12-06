// Los namespaces son una forma de encapsular elementos, funciones, clases, etc, para evitar conflictos de nombres. En C++ se pueden declarar namespaces anidados, es decir, namespaces dentro de otros namespaces.

// Para declarar un namespace se usa la palabra clave namespace seguida del nombre del namespace y de las llaves que delimitan el contenido del namespace.

// Para acceder a los elementos de un namespace se usa el operador de resolución de alcance (::) seguido del nombre del namespace y del nombre del elemento.

#include <iostream>

// Se pueden declarar varios namespaces en un mismo archivo
namespace primero
{
 int x = 1;
}
namespace segundo
{
 int x = 2;
}

int main()
{

    using namespace primero; // Usamos el namespace primero
    // A partir de aquí no es necesario usar el namespace primero para acceder a los elementos del namespace primero

    using namespace std; // Usamos el namespace std
    // A partir de aquí no es necesario usar el namespace std para acceder a los elementos del namespace std, como el cout, podriamos acceder a todas las funciones del namespace std sin tener que usar el namespace completo

    using std::cout; // Usamos la función cout del namespace std si necesitamos usar una función específica de un namespace sin tener que usar el namespace completo
    // En este caso, no sería necesario usar el namespace std para acceder a la función cout


    // ==================================================
    // Si se declara una variable con el mismo nombre en el namespace global y en un namespace, se imprimirá la variable del namespace
    int x = 0;
    cout << "X = " << x << '\n'; // No hay namespace, por lo que se imprime la variable x local
    cout << "X1 = " << primero::x << '\n'; // Usamos el namespace primero, por lo que se imprime la variable x del namespace primero
    cout << "X2 = " << segundo::x << '\n'; // Usamos el namespace segundo, por lo que se imprime la variable x del namespace segundo

    return 0;
}