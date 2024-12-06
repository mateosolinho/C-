// Typedef sirve para crear un alias de un tipo de dato, es decir, para asignarle un nombre diferente a un tipo de dato existente. Para crear un alias de un tipo de dato se usa la palabra clave typedef seguida del tipo de dato y del nombre del alias.

#include <iostream>
#include <vector>

//EJEMPLO TYPEDEF ==========================

// IMPORTANTE: typedef ha sido remplazado por using en C++11, ya que using es más versátil y puede ser usado con plantillas.

// Ejemplo Complejo
// typedef std::vector<std::pair<std::string, int>> pair_list_t; // Se crea un alias para el tipo de dato vector<pair<string, int>> para no tener que escribirlo completo cada vez que se quiera usar.
// El nombre se escribe con una _ y una t al final para indicar que es un tipo de dato.

// Ejemplo Simple
// typedef std::string text_t; // Se crea un alias para el tipo de dato string para no tener que escribirlo completo cada vez que se quiera usar.
// typedef int numero_t; // Se crea un alias para el tipo de dato int para no tener que escribirlo completo cada vez que se quiera usar.

//EJEMPLO USING ==========================

using text_t = std::string; // Se crea un alias para el tipo de dato string para no tener que escribirlo completo cada vez que se quiera usar, pero esta vez con la palabra clave using.
using numero_t = int; // Se crea un alias para el tipo de dato int para no tener que escribirlo completo cada vez que se quiera usar, pero esta vez con la palabra clave using.

int main()
{
    // // Ejemplo Complejo
    // pair_list_t pair_list; // En lugar de escribir vector<pair<string, int>> se escribe pair_list_t, no sale ningún error porque el compilador sabe que pair_list_t es un vector<pair<string, int>>.

    // // Ejemplo Simple
    text_t nombre = "Juan"; // En lugar de escribir string se escribe text_t, no sale ningún error porque el compilador sabe que text_t es un string.
    numero_t edad = 10; // En lugar de escribir int se escribe numero_t, no sale ningún error porque el compilador sabe que numero_t es un int.
    std::cout << nombre << " " << edad << std::endl;

    return 0;
}