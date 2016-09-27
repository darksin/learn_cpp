class Birthday {
    public:
        Birthday(int m, int d, int y)
        : month(m), day(d), year(y) {
        }
        void printDate() {
            std::cout << month << "/" << day << "/" << year << std::endl;
        }
    private:
        int month;
        int day;
        int year;
};