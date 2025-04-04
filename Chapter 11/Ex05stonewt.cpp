#include"Ex05stonewt.h"

Stonewt::Stonewt(int stn,double lbs)
{
    stone=stn;
    pds_left=lbs;
    pounds=stn*lbs_per_stn+lbs;
    mode=STONE;
}
Stonewt::Stonewt(double pds)
{
    stone=int(pds)/lbs_per_stn;
    pds_left=int(pds)%lbs_per_stn+pds-int(pds);
    pounds=pds;
    mode=PDS_FP;
}
Stonewt::Stonewt(int pds)
{
    stone=pds/lbs_per_stn;
    pds_left=pds%lbs_per_stn;
    pounds=pds;
    mode=PDS_INT;
}
Stonewt::Stonewt()
{
    stone=pds_left=pounds=0;
    mode=STONE;
}
Stonewt::~Stonewt()
{

}
void Stonewt::set_mode(Mode m)
{
    mode=m;
}
Stonewt Stonewt::operator+(const Stonewt &b) const
{
    Stonewt sum;

    sum.pounds=pounds+b.pounds;
    sum.stone=int(sum.pounds)/lbs_per_stn;
    sum.pds_left=int(sum.pounds)%lbs_per_stn+sum.pounds-int(sum.pounds);
    sum.mode=mode;

    return sum;
}
Stonewt Stonewt::operator-(const Stonewt &b) const
{
    Stonewt diff;

    diff.pounds=pounds-b.pounds;
    diff.stone=int(diff.pounds)/lbs_per_stn;
    diff.pds_left=int(diff.pounds)%lbs_per_stn+diff.pounds-int(diff.pounds);
    diff.mode=mode;

    return diff;
}
Stonewt Stonewt::operator*(double n) const
{
    Stonewt result;

    result.pounds=pounds*n;
    result.stone=int(result.pounds)/lbs_per_stn;
    result.pds_left=int(result.pounds)%lbs_per_stn+result.pounds-int(result.pounds);
    result.mode=mode;

    return result;
}
std::ostream & operator<<(std::ostream &os,const Stonewt &a)
{
    if (a.mode==Stonewt::STONE)
        os<<a.stone<<" stone, "<<a.pds_left<<" pounds\n";
    else if (a.mode==Stonewt::PDS_INT)
        os<<int(a.pounds+0.5)<<" pounds\n";
    else
        os<<a.pounds<<" pounds\n";

    return os;
}