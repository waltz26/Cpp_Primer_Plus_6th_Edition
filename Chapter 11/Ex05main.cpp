#include<iostream>
#include"Ex05stonewt.h"
using std::cout;

int main()
{
    Stonewt a=275;
    Stonewt b(285.75);
    Stonewt c(21,8);

    //operator
    cout<<a+b;
    cout<<c-a;
    cout<<b*10;
    cout<<2.3*a;

    b.set_mode(Stonewt::PDS_INT);
    cout<<b<<c;

    return 0;
}