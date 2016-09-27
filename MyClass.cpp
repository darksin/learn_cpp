#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
  std::cout << "Constructor" << std::endl;
  std::cout << regVar << std::endl;
  std::cout << constVar <<std::endl;
}

MyClass::~MyClass()
{
  std::cout << "Destructor" << std::endl;
}