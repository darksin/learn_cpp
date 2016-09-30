#include <iostream>

template <class T, class U>
T smaller(T a, U b) {
    return (a<b ? a : b);
}

template <class T>
class Pair {
    private:
        T first,second;
    public:
        Pair (T c, T d):
            first(c), second(d) {

            }
        T bigger();
};

template <class T>
T Pair<T>::bigger(){
    return (first>second ? first : second);
}

template <class T>
class MyClass {
    public:
        MyClass(T x) {
            std::cout << x << " - not a char" << std::endl;
        }
};

template < >
class MyClass<char> {
    public:
        MyClass (char x) {
            std::cout << x << " - is a char!" << std::endl;
        }
};

int main() {
    int x=7.15;
    double y=15.54;
    std::cout << smaller(x,y) << std::endl;
    Pair <int> obj(11,22);
    std::cout << obj.bigger();
    MyClass<int>ob1(42);
    MyClass<double>ob2(5.47);
    MyClass<char>ob3('s');
}