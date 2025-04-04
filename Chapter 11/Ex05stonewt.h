#ifndef STONEWT_H_
#define STONEWT_H_

#include<iostream>

class Stonewt{
public:
    enum Mode{ STONE,PDS_INT,PDS_FP };
private:
    enum { lbs_per_stn=14 };
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt(int stn,double lbs);
    Stonewt(double pds);
    Stonewt(int pds);
    Stonewt();
    ~Stonewt();
    void set_mode(Mode m);
    Stonewt operator+(const Stonewt &b) const;
    Stonewt operator-(const Stonewt &b) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n,const Stonewt &a)
        { return a*n; }
    friend std::ostream & operator<<(std::ostream &os,const Stonewt &a);
};

#endif
