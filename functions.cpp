#include <iostream>
#include <string>
using namespace std;

void printSomething() // 1st option
{
  cout << "Hi there!" << endl;
}

void printSomethingAgain(); // 2nd option
int timesTwo(int x);

int main()
{
    printSomething();
    printSomethingAgain();

    cout << timesTwo(4) << endl;
    cout << timesTwo(24) << endl;
    return 0;
}

void printSomethingAgain() { // 2nd option
    cout << "2nd option" << endl;
}

int timesTwo(int x) {
    return x+2;
}