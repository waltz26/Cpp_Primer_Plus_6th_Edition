#include"Ex06stonewt.h"
using std::cout;

Stonewt::Stonewt(int stn,double lbs)
{
    stone=stn;
    pds_left=lbs;
    pounds=stn*lbs_per_stn+lbs;
}
Stonewt::Stonewt(double pds)
{
    stone=int(pds)/lbs_per_stn;
    pds_left=int(pds)%lbs_per_stn+pds-int(pds);
    pounds=pds;
}
Stonewt::Stonewt()
{
    stone=pds_left=pounds=0;
}
Stonewt::~Stonewt()
{

}
void Stonewt::show_lbs() const
{
    cout<<pounds<<" pounds\n";
}
void Stonewt::show_stn() const
{
    cout<<stone<<" stone, "<<pds_left<<" pounds\n";
}
bool Stonewt::operator<(const Stonewt &b) const
{
    return pounds<b.pounds;
}
bool Stonewt::operator<=(const Stonewt &b) const
{
    return pounds<=b.pounds;
}
bool Stonewt::operator>(const Stonewt &b) const
{
    return pounds>b.pounds;
}
bool Stonewt::operator>=(const Stonewt &b) const
{
    return pounds>=b.pounds;
}
bool Stonewt::operator==(const Stonewt &b) const
{
    return pounds==b.pounds;
}
bool Stonewt::operator!=(const Stonewt &b) const
{
    return pounds!=b.pounds;
}