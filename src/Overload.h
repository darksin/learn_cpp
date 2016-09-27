class OverLoad {
    public:
        int var;
        OverLoad() {
        }
        OverLoad(int a)
        : var(a) {
        }
        OverLoad operator+(OverLoad &ol) {
            OverLoad res;
            res.var= this->var+ol.var;
            return res;
        }
};