class Person {
    public:
        Person(std::string n, Birthday b)
        : name(n), bd(b) {
        }
        void printInfo() {
            std::cout << name << std::endl;
            bd.printDate();
        }
    private:
        std::string name;
        Birthday bd;
};