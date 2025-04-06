#include<iostream>
#include<cstring>
#include"Ex03stock.h"
using std::cout;

Stock::Stock()
{
    company=new char[8];
    strcpy(company,"no name");
    shares=0;
    share_val=0.0;
    total_val=0.0;
}
Stock::Stock(const char *co,int n,double pr)
{
    company=new char[strlen(co)+1];
    strcpy(company,co);

    if (n<0)
    {
        cout<<"Number of shares can't be negative; "
            <<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();
}
Stock::Stock(const Stock &s)
{
    company=new char[strlen(s.company)+1];
    strcpy(company,s.company);

    shares=s.shares;
    share_val=s.share_val;
    set_tot();
}
Stock::~Stock()
{
    delete [] company;
}
void Stock::buy(int num,double price)
{
    if (num<0)
    {
        cout<<"Number of shares purchased can't be negative. "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void Stock::sell(int num,double price)
{
    if (num<0)
    {
        cout<<"Number of shares sold can't be negative. "
            <<"Transaction is aborted.\n";
    }
    else if (num>shares)
    {
        cout<<"You can't sell more than you have! "
            <<"Transaction is aborted.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val=price;
    set_tot();
}
const Stock & Stock::topval(const Stock &s) const
{
    if (s.total_val>total_val)
        return s;
    else
        return *this;
}
Stock & Stock::operator=(const Stock &s)
{
    if (this==&s)
        return *this;
    delete [] company;

    company=new char[strlen(s.company)+1];
    strcpy(company,s.company);
    shares=s.shares;
    share_val=s.share_val;
    set_tot();

    return *this;
}
std::ostream & operator<<(std::ostream &os,const Stock &s)
{
    using std::ios_base;

    ios_base::fmtflags orig=os.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec=os.precision(3);

    os<<"Company: "<<s.company
        <<"  Shares: "<<s.shares<<'\n';
    os<<"  Share Price: $"<<s.share_val;
    os.precision(2);
    os<<"  Total Worth: $"<<s.total_val<<'\n';

    os.setf(orig,ios_base::floatfield);
    os.precision(prec);
    return os;
}