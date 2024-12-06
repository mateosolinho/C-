#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Ingresa el lado A: ";
    std::cin >> a;

    std::cout << "Ingresa el lado B: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "El valor de la hipotenusa con los lados de " << a << " y " << b << " es " << c <<std::endl;

    return 0;
}