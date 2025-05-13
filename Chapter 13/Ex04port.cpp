#include<iostream>
#include<cstring>
#include"Ex04port.h"

using std::cout;
using std::endl;

Port::Port(const char *br,const char *st,int b)
{
    brand=new char[strlen(br)+1];
    strcpy(brand,br);

    strcpy(style,st);
    bottles=b;
}
Port::Port(const Port &p)
{
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);

    strcpy(style,p.style);
    bottles=p.bottles;
}
void Port::show() const
{
    cout<<"Brand: "<<brand<<endl;
    cout<<"Kind: "<<style<<endl;
    cout<<"Bottles: "<<bottles<<endl;
}
Port & Port::operator=(const Port &p)
{
    if (&p==this)
        return *this;
    delete [] brand;

    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);

    strcpy(style,p.style);
    bottles=p.bottles;

    return *this;
}
Port & Port::operator+=(int b)
{
    bottles+=b;
    return *this;
}
Port & Port::operator-=(int b)
{
    bottles-=b;
    return *this;
}
std::ostream & operator<<(std::ostream &os,const Port &p)
{
    cout<<p.brand<<", "<<p.style<<", "<<p.bottles<<endl;
    return os;
}

VintagePort::VintagePort()
{
    nickname=new char[1];
    strcpy(nickname,"");

    year=0;
}
VintagePort::VintagePort(const char *br,const char *st,int b,const char *nn,int y):
    Port(br,st,b)
{
    nickname=new char[strlen(nn)+1];
    strcpy(nickname,nn);

    year=y;
}
VintagePort::VintagePort(const VintagePort &vp)
{
    nickname=new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);

    year=vp.year;
}
void VintagePort::show() const
{
    Port::show();
    cout<<"Nick name: "<<nickname<<endl;
    cout<<"Year: "<<year<<endl;
}
VintagePort & VintagePort::operator=(const VintagePort &vp)
{
    if (&vp==this)
        return *this;
    Port::operator=(vp);
    delete [] nickname;

    nickname=new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);

    year=vp.year;

    return *this;
}
std::ostream & operator<<(std::ostream &os,const VintagePort &vp)
{
    os<<(const Port &)vp;
    os<<vp.nickname<<", "<<vp.year<<endl;

    return os;
}