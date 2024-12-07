// Las sobrecargas de funciones son funciones que tienen el mismo nombre pero diferentes parametros, sirven para que el programador pueda llamar a la función con diferentes parametros y el compilador se encargará de llamar a la función correcta dependiendo de los parametros que se le pasen.

#include <iostream>

void hornearPizza();
void hornearPizza(std::string ingrediente1);
void hornearPizza(std::string ingrediente1, std::string ingrediente2);

int main(){

    // Dependiendo de los parametros que se le pasen, el compilador llamara a la función correcta
    hornearPizza();
    hornearPizza("queso");
    hornearPizza("queso", "jamon");

    return 0;
}

void hornearPizza() {
    std::cout << "Aqui esta tu pizza!" << std::endl;
}

void hornearPizza(std::string ingrediente1) {
    std::cout << "Aqui esta tu pizza de " << ingrediente1 << std::endl;
}

void hornearPizza(std::string ingrediente1, std::string ingrediente2) {
    std::cout << "Aqui esta tu pizza de " << ingrediente1 << " y " << ingrediente2 << std::endl;
}