#include <iostream>
#include <iomanip>
#include <limits>

int printMenu();
void mostrarSaldo(double saldo);
double depositar();
double retirar(double saldo);

int main()
{

    double saldo = 1534;
    int opt;

    std::cout << "##### SISTEMA BANCARIO #####\n";

    do
    {
        opt = printMenu();

        if (!(std::cin >> opt)) // Si la entrada no es un número entero válido (por ejemplo, una letra o un número decimal), se mostrará un mensaje de error.
        {
            std::cin.clear(); // Se limpia el estado del flujo de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Se descarta la entrada no válida
            std::cout << "Entrada no válida! Intentalo de nuevo.\n"; // Se muestra un mensaje de error
        }

        switch (opt)
        {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo += depositar();
            mostrarSaldo(saldo);
            break;
        case 3:
            saldo -= retirar(saldo);
            mostrarSaldo(saldo);
            break;
        case 4:
            std::cout << "[!] Saliendo...";
            break;
        default:
            std::cout << "[!] Error, elige una opcion entre 1 y 4";
            break;
        }

    } while (opt != 4);

    return 0;
}

int printMenu()
{
    int opt;

    std::cout << "\nIngrese una opcion:\n";
    std::cout << "1. Mostrar el saldo\n";
    std::cout << "2. Depositar Dinero\n";
    std::cout << "3. Retirar dinero\n";
    std::cout << "4. Salir\n";
    std::cin >> opt;

    return opt;
}

void mostrarSaldo(double saldo)
{
    std::cout << "Su balance es: $" << std::setprecision(2) << std::fixed << saldo << "\n";
}

double depositar()
{
    double cantidad;

    std::cout << "Introduzca la cantidad que quiere ingresar:\n";
    std::cin >> cantidad;

    if (cantidad > 0)
    {
        std::cout << "Ingreso realizado con exito!\n";
        return cantidad;
    }
    else
    {
        std::cout << "La cantidad ingresada siempre debe ser un número positivo\n";
        return 0;
    }

    return 0;
}

double retirar(double saldo)
{
    double cantidad;

    std::cout << "Introduzca la cantidad que quiere retirar:\n";
    std::cin >> cantidad;

    if (cantidad > 0)
    {
        if (saldo > cantidad)
        {
            std::cout << "Retirada realizada con exito!\n";
            return cantidad;
        }
        else
        {
            std::cout << "[!] Error, no tienes esa cantidad de dinero\n";
            return 0;
        }
    }
    else
    {
        std::cout << "[!] La cantidad ingresada siempre debe ser un número positivo\n";
        return 0;
    }

    return 0;
}