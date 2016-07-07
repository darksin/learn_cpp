#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void printSomething() // 1st option
{
  cout << "Hi there!" << endl;
}

void printSomethingAgain(); // 2nd option
int timesTwo(int x);
int addNumbers(int x, int y);

int main()
{
    printSomething();
    printSomethingAgain();

    cout << timesTwo(4) << endl;
    cout << timesTwo(24) << endl;

    cout << addNumbers(50,25) << endl;;
    int z = addNumbers(35,7);
    cout << z << endl;

    for (int w =1; w <= 10; w++) {
        cout << rand() << endl;
    }
    for (int u =1; u <= 10; u++){
        cout << 1 + (rand() % 8) << endl;
    }
    srand(time(0));
    for (int v = 1; v <=10; v++) {
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;
}

void printSomethingAgain() { // 2nd option
    cout << "2nd option" << endl;
}
int timesTwo(int x) {
    return x+2;
}
int addNumbers(int x, int y){
    int result = x + y;
    return result;
}
