#include <iostream>

template <class T, class U>
T smaller(T a, U b) {
    return (a<b ? a : b);
}

int main() {
    int x=7.15;
    double y=15.54;
    std::cout << smaller(x,y) << std::endl;
}