class Mother {
    public:
        Mother() {
        };
        void sayHi() {
            std::cout << "Hi";
        }
};

class Daughter : public Mother {
    public:
        Daughter() {
        }
};