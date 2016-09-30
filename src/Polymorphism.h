class Enemy {
    public:
        virtual void attack(){
        }
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