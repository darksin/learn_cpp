class Mother {
    public:
        Mother() {
        };
        void sayHi() {
            std::cout << var << std::endl;
        }
    private:
        int var = 0;
    protected:
        int someVar;
};

class Daughter : public Mother {
    public:
        Daughter() {
        }
};

class Father {
    public:
        Father() {
            std::cout << "Father ctor" << std::endl;
        }
        ~Father() {
            std::cout << "Father dtor" << std::endl;
        }
};

class Son: public Father {
    public:
        Son() {
            std::cout << "Son ctor" << std::endl;
        }
        ~Son() {
            std::cout << "Son dtor" << std::endl;
        }
};