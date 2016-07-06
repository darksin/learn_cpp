#include <iostream>
using namespace std;

int main()
{
    /* Variables */
    int a = 10;
    int b = 12;

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
    
    /* Switch Statement */
    int age = 42;
    switch (age) {
    case 16:
        std::cout << "Too young" << std::endl;
        break;
    case 42:
        std::cout << "Adult" << std::endl;
        break;
    case 70:
        std::cout << "Senior" << std::endl;
    break;
    }

    std::cout << "Switch with default:" << std::endl;
    age = 25;
    switch (age) {
    case 16:
        std::cout << "Too young" << std::endl;
        break;
    case 42:
        std::cout << "Adult" << std::endl;
        break;
    case 70:
        std::cout << "Senior" << std::endl;
        break;
    default:
        std::cout << "This is the default case" << std::endl;
    }

    /* Logical Operators */
    age = 19;
    int score = 90;
    if (age > 16 && age < 60) {
        std::cout << "Accepted!" << std::endl;
    }
    if (age > 20 || score > 50) {
        std::cout << "Accepted!" << std::endl;
    }

    return 0;
}