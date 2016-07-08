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

int main() {
    BankAccount test;
    test.sayHi();
    myClass myObj;
    myObj.setName("SoloLearn");
    myObj.name_public = "SoloL";
    cout << myObj.name_public << endl;

    return 0;
}
