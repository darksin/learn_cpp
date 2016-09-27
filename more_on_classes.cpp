#include <iostream>
#include <string>
#include "src/MyClass.h"
#include "src/Birthday.h"
#include "src/Person.h"
#include "src/Friend.h"
#include "src/This.h"
#include "src/Overload.h"

using namespace std;

int main() {
  Birthday bd(7, 24, 1985);
  Person p("Sebastian", bd);
  p.printInfo();
  MyClass obj(42,24);
  FriendClass ff;
  friendFunction(ff);
  ThisClass obj1(1);
  obj1.printInfo();
  OverLoad ol1(12),ol2(21);
  OverLoad res = ol1+ol2;
  std::cout << "Overloading:" << res.var << std::endl;
  return 0;
}