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

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    n.attack();
    m.attack();
}