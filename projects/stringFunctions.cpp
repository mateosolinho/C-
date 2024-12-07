#include <iostream>

int main(){

    std::string nombre;

    nombre = "Juan";

    std::cout << nombre.length(); // Esta función regresa el tamaño de la cadena
    std::cout << nombre.empty(); // Esta función regresa un valor booleano si la cadena está vacía o no
    std::cout << nombre.append(" Perez"); // Esta función agrega una cadena al final de la cadena original
    std::cout << nombre.at(0); // Esta función regresa el caracter en la posición indicada
    std::cout << nombre.insert(4, "ito"); // Esta función inserta una cadena en la posición indicada
    std::cout << nombre.erase(4, 3); // Esta función borra una cantidad de caracteres a partir de la posición indicada
    std::cout << nombre.replace(4, 3, "ito"); // Esta función reemplaza una cantidad de caracteres a partir de la posición indicada
    std::cout << nombre.find("ito"); // Esta función regresa la posición de la cadena indicada
    std::cout << nombre.substr(4, 3); // Esta función regresa una subcadena a partir de la posición indicada
    nombre.clear(); // Esta función borra el contenido de la cadena
    std::cout << nombre.compare("Juan"); // Esta función compara dos cadenas


    return 0;
}