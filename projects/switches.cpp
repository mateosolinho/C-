#include <iostream>

int main(){
    int mes;
    std::cout << "Introduce un mes: ";
    std::cin >> mes;

    switch (mes)
    {
    case 1:
        std::cout << "Mes de Enero";
        break;
    case 2:
        std::cout << "Mes de Febrero";
        break;
    case 3:
        std::cout << "Mes de Marzo";
        break;
    case 4:
        std::cout << "Mes de Abril";
        break;
    case 5:
        std::cout << "Mes de Mayo";
        break;
    case 6:
        std::cout << "Mes de Junio";
        break;
    case 7:
        std::cout << "Mes de Julio";
        break;
    case 8:
        std::cout << "Mes de Agosto";
        break;
    case 9: 
        std::cout << "Mes de Septiembre";
        break;
    case 10:
        std::cout << "Mes de Octubre";
        break;
    case 11:
        std::cout << "Mes de Noviembre";
        break;
    case 12:
        std::cout << "Mes de Diciembre";
        break;
    
    default:
        std::cout << "Mes no valido, por favor introduce un número del 1 al 12";
        break;
    }

    // ==================================================

    char calificacion;
    std::cout << "\nIntroduce tu calificación: ";
    std::cin >> calificacion;

    switch (calificacion)
    {
    case 'A':
        std::cout << "Excelente";
        break;
    case 'B':
        std::cout << "Muy bien";
        break;
    case 'C':
        std::cout << "Bien";
        break;
    case 'D':
        std::cout << "Puedes mejorar";
        break;
    case 'F':
        std::cout << "Suspenso";
        break;
    default:
        std::cout << "Calificación no valida, por favor introduce una letra de la A a la F";
        break;
    }
}