#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* Data types
    int, float, double */
    int a = 42;
    std::cout << "Integer: " << a << std::endl;
    unsigned long int b;
    std::cout << "Unsigned long integer: " << b << std::endl;
    double temp = 4.21;
    std::cout << "Float: " << temp << std::endl;

    /* string, char, bool */
    string c = "I am learning C++";
    std::cout << c << std::endl;
    char test = 'S';
    std::cout << test << std::endl;
    
    return 0;
}