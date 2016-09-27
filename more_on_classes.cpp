#include <iostream>
#include <string>
#include "src/MyClass.h"
#include "src/Birthday.h"
#include "src/Person.h"
#include "src/Friend.h"

using namespace std;

int main() {
  Birthday bd(7, 24, 1985);
  Person p("Sebastian", bd);
  p.printInfo();
  MyClass obj(42,24);
  FriendClass ff;
  friendFunction(ff);
  return 0;
}