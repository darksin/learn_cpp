#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass()
{
  std::cout << "Constructor" << std::endl;
}

MyClass::~MyClass()
{
  std::cout << "Destructor" << std::endl;
}

void MyClass::myPrint() const {
  std::cout << "Hello -- const" << std::endl;
}