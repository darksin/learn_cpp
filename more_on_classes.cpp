#include <iostream>
#include <string>
#include "MyClass.h"
#include "Birthday.h"
#include "Person.h"

using namespace std;

int main() {
  Birthday bd(7, 24, 1985);
  Person p("Sebastian", bd);
  p.printInfo();
  MyClass obj(42,24);
  return 0;
}