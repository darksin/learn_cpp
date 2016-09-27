#include <string>
#include "Birthday.h"

class Person {
    public:
        Person(string n, Birthday b)
        : name(n), bd(b) {
        }
    private:
        string name;
        Birthday bd;
};