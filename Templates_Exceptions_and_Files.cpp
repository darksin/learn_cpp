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

int main() {
    int x=7.15;
    double y=15.54;
    std::cout << smaller(x,y) << std::endl;
    Pair <int> obj(11,22);
    std::cout << obj.bigger();
}