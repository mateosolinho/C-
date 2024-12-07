#include <iostream>
#include <ctime>

void felizCumpleaños(std::string nombre, int edad); // Se pueden definir funciones fuera de la función main para que el código sea más legible
double areaCuadrado(double lado); 

int main()
{

    std::string nombre = "Juan";
    int edad = 25;

    int lado = 5;

    felizCumpleaños(nombre, edad);

    std::cout << "El area del cuadrado es: " << areaCuadrado(lado) << std::endl;

    return 0;
}

void felizCumpleaños(std::string nombre, int edad) // En C++ se pueden definir funciones fuera de la función main
{
    std::cout << "Feliz cumple " << nombre << std::endl;
    std::cout << "Ya tienes " << edad << " anos" << std::endl;
}

double areaCuadrado(double lado) // Definimos la funcion con el tipo de dato que va a devolver
{
    return lado * lado; // Devolvemos el area del cuadrado
}