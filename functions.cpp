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

int volume (int l=1, int w=1, int h=1) {
  return l*w*h;
}

void printNumber(int k) {
    cout << "Prints an integer: " << k << endl;
}
void printNumber(float k) {
    cout << "Prints a float: " << k << endl;
}

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

void printArray(int arr[], int size) {
  for(int m=0; m<size; m++) {
    cout <<arr[m]<< endl;
  }
}

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

    cout << volume() << endl;
    cout << volume(5) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(3, 7, 6) << endl;
    
    int i = 16;
    float j = 54.541;
    printNumber(i);
    printNumber(j);

    cout << factorial(5) << endl;;

    int myArr[3]= {42, 33, 88};
    printArray(myArr, 3);

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
