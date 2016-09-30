#include <iostream>
#include "src/Inheritance.h"
#include "src/Polymorphism.h"

using namespace std;

int main() {
    Daughter d;
    d.sayHi();
    Father f;
    Son s;

    Ninja n;
    Monster m;

    Enemy*e1 = &n;
    Enemy*e2 = &m;

    e1->attack();
    e2->attack();
}