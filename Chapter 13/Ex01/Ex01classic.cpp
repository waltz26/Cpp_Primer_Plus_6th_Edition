#include<iostream>
#include<cstring>
#include"Ex01classic.h"

Classic::Classic()
{
    strcpy(songs,"");
}
Classic::Classic(const char *s,const char *s1,const char *s2,int n,double x):
    Cd(s1,s2,n,x)
{
    strcpy(songs,s);
}
Classic::~Classic()
{

}
void Classic::report() const
{
    using std::cout;

    Cd::report();
    cout<<'-'<<songs<<"-\n";
}