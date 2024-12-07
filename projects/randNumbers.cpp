#include <iostream>

int main(){

    srand(time(NULL)); // Se le pasa como argumento la hora actual para que la semilla sea diferente cada vez que se ejecute el programa

    int num = (rand() % 6) + 1; // Genera un número aleatorio entre 1 y 6 y lo guarda en la variable num

    std::cout << num << std::endl;

    return 0;
}