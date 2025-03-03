#ifndef CLASS_H_
#define CLASS_H_

namespace Sales{
    class MySales{
    private:
        static const int QUARTERS=4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        MySales(const double ar[]=(double[4]){0.0,0.0,0.0,0.0},int n=4);
        void setsales();
        void showsales() const;
    };
}

#endif
