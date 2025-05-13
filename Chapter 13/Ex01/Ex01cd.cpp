#include<iostream>
#include<cstring>
#include"Ex01cd.h"

Cd::Cd()
{
    strcpy(performers,"");
    strcpy(label,"");
    selections=0;
    playtime=0;
}
Cd::Cd(const char *s1,const char *s2,int n,double x)
{
    strcpy(performers,s1);
    strcpy(label,s2);
    selections=n;
    playtime=x;
}
Cd::~Cd()
{

}
void Cd::report() const
{
    using std::cout;

    cout<<label<<" by "<<performers<<",\n";
    cout<<selections<<" selection(s), "<<playtime<<" minute(s) playtime.\n";
}