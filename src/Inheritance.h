class Mother {
    public:
        Mother() {
        };
        void sayHi() {
            std::cout << var;
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