class ThisClass {
    public:
        ThisClass(int a)
        : var(a) {
        }
        void printInfo() {
            std::cout << var << std::endl;
            std::cout << this->var << std::endl;
            std::cout << (*this).var << std::endl;
        }
    private:
        int var;
};