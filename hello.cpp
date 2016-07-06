#include <iostream>
using namespace std;

int main()
{
    /* Variables */
    int aktualnyRok = 2016;
    int a = 10;
    int b = 12;
    int suma = a + b;
    std::cout << "Hello world! in ";
    std::cout << aktualnyRok << std::endl;
    std::cout << "Suma a i b wynosi ";
    std::cout << suma << std::endl;
    int c;
    std::cout << "Podaj wartość c: ";
    std::cin >> c;

    /* if else statement */
    if ( b > a ) {
        std::cout << "B jes większe !" << std::endl;
    }
    else {
        std::cout << "B nie jest większe..." << std::endl;
    }
    std::cout << "IF ELSE bez klamr tylko przy jednym warunku" << std::endl;
    if (a>b)
        std::cout << "A jest większe od B" << std::endl;
    else
        std::cout << "A nie jest większe od B" << std::endl;
        
    return 0;
}