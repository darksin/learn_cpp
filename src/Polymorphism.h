class Enemy {
    public:
        virtual void attack() = 0;
};

class Ninja: public Enemy {
    public:
        void attack() {
            std::cout << "Ninja!" << std::endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            std::cout << "Monster!" << std::endl;
        }
};