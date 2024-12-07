#include <iostream>
#include <ctime>

int main()
{
    int solution;
    int num;
    bool success;
    int attemps = 5;

    srand(time(NULL));

    solution = (rand() & 100) + 1;

    std::cout << "###### ADIVINA EL NUMERO ######" << std::endl;
    std::cout << "Adivina el numero entre 1 y 100" << std::endl;

    do
    {
        std::cout << "\nTe quedan " << attemps << " intentos" << std::endl;
        std::cout << "Introduce tu numero: " << std::endl;
        std::cin >> num;
        success = false;

        if (num == solution)
        {
            std::cout << "ENHORABUENA, HAS ADIVINADO EL NUMERO " << solution << " !!!!" << std::endl;
            success = true;
        }
        else if (attemps == 1)
        {
            std::cout << "HAS PERDIDO, EL NUMERO A ADIVINAR ERA " << solution << std::endl;
            success = true;
        }
        else if (num > solution)
        {
            std::cout << "El numero ha adivinar es mas bajo " << std::endl;
            success = false;
        }
        else if (num < solution)
        {
            std::cout << "El numero ha adivinar es mas alto " << std::endl;
            success = false;
        }

        attemps--;
    } while (!success);

    return 0;
}