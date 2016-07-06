#include <iostream>
using namespace std;

int main()
{
    /* Variables */
    int aktualnyRok = 2016;
    int a = 10;
    int b = 12;
    int suma = a + b;
    std::cout << "Hello world! in " << aktualnyRok << std::endl;
    std::cout << "Suma a i b wynosi " << suma << std::endl;
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
    
    /* While loop*/
    int num = 1;
    while (num < 6) {
        std::cout << "Number: " << num << std::endl;
        num = num + 1;
    }

    /* For loop */
    for (int a = 0; a < 50; a+=10) {
        std::cout << a << std::endl;
    }

    /* Do..while loop */
    int d = 0;
    do {
        std::cout << d << std::endl;
        d++;
    } while (d < 5);
    
    return 0;
}