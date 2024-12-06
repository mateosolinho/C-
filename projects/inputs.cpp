#include <iostream>
#include <string> // Se incluye la librería string para poder usar la función getline() que permite leer cadenas de texto con espacios
// Los parametros de la función getline() son cin y la variable donde se guardará la cadena de texto

// cout << (Operador de inserción) -> Sirve para imprimir en la consola
// cin >> (Operador de extracción) -> Sirve para leer de la consola

int main(){

    std::string nombre;
    int edad;

    std::cout << "Ingresa tu nombre completo: " << std::endl;
    std::getline(std::cin>>std::ws, nombre); // Para leer cadenas de texto con espacios se usa getline en lugar de cin para que no se detenga al encontrar un espacio
    // std::cin>>std::ws -> Se usa para limpiar el buffer del teclado y poder leer correctamente la cadena de texto con espacios (ws = white space)

    std::cout << "Ingresa tu edad: " << std::endl;
    std::cin >> edad; // Para leer entradas de la consola se usa cin

    std::cout << "Hola " << nombre;
    std::cout << " Tu edad es " << edad << " años" << '\n';

    return 0;
}