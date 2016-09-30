class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int ap){
            attackPower = ap;
        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            std::cout << "Ninja! - " <<attackPower<< std::endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            std::cout << "Monster! - "<<attackPower<< std::endl;
        }
};