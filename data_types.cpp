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

    /* Variable naming rules
    Arrays */
    int i[5];
    int j[5] = {11, 45, 62, 70, 88};
    j[1] = 42;
    std::cout << "Array: " << j[1] << std::endl;

    /* Arrays in Loops */
    int myArr[5];

    for(int x=0; x<5; x++) {
        myArr[x] = 42;
        cout << x << ": " << myArr[x] << endl;
    }

    /* Arrays in Calculations */
    int arr[] = {11, 35, 62, 555, 989};
    int sum = 0; 

    for (int x = 0; x < 5; x++) {
        sum += arr[x];
    }
    cout << sum << endl;

    /* Multi-Dimensional Arrays */
    int x[2][3] = {{2, 3, 4}, {8, 9, 10}};
    cout << x[0][2] << endl;
    
    return 0;
}