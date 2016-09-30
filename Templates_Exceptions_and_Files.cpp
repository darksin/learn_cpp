#include <iostream>

template <class T>
T sum(T a, T b) {
    return a+b;
}

int main() {
    double x=7.15, y=15.54;
    std::cout << sum(x,y) << std::endl;
}