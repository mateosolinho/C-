#include <iostream>

int main(){

    // Este es un bucle while que imprime los números del 0 al 9
    int i = 0;
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }

    // ==================================================

    // Este es un bucle do while que imprime los números del 0 al 9
    int j = 0;
    do
    {
        std::cout << j << std::endl;
        j++;
    } while (j < 10);
    
    // ==================================================

    // Este es un bucle for que imprime los números del 0 al 9
    for (int k = 0; k < 10; k++)
    {
        std::cout << k << std::endl;
    }
    
    return 0;
}