#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/* Class */
class BankAccount {
    public:
    void sayHi() {
        cout << "Hi" << endl;
    }
};

/* Encapsulation */
class myClass{
    public:
    void setName(string x) {
        name = x;
    }
    string name_public;
    private:
    string name;
};

/* Constructor */
class myCons {
    public:
    myCons(string nm) {
        setVar(nm);
    }
    void setVar(string k) {
        vars = k;
    }
    string getVar() {
        return vars;
    }
    private:
    string vars;
};

int main() {
    BankAccount test;
    test.sayHi();
    myClass myObj;
    myObj.setName("SoloLearn");
    myObj.name_public = "SoloL";
    cout << myObj.name_public << endl;
    myCons object1("OBJ1");
    myCons object2("OBJ2");
    cout << object1.getVar() << endl;

    return 0;
}
