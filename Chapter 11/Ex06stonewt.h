#ifndef STONEWT_H_
#define STONEWT_H_

#include<iostream>

class Stonewt{
private:
    enum { lbs_per_stn=14 };
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(int stn,double lbs);
    Stonewt(double pds);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    bool operator<(const Stonewt &b) const;
    bool operator<=(const Stonewt &b) const;
    bool operator>(const Stonewt &b) const;
    bool operator>=(const Stonewt &b) const;
    bool operator==(const Stonewt &b) const;
    bool operator!=(const Stonewt &b) const;
};

#endif
