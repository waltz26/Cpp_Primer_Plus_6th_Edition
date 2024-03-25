namespace Sales{
    const int quarters=4;

    struct sales{
        double sales[quarters];
        double average;
        double max;
        double min;
    };

    void setsales(sales &s,const double ar[],int n);
    void setsales(sales &s);
    void showsales(const sales &s);
}
