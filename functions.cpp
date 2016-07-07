#include <iostream>
#include <string>
using namespace std;

void printSomething() // 1st option
{
  cout << "Hi there!" << endl;
}

void printSomethingAgain(); // 2nd option

int main()
{
    printSomething();
    printSomethingAgain();
    return 0;
}

void printSomethingAgain() { // 2nd option
    cout << "2nd option" << endl;
}