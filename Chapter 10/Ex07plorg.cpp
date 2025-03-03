#include<iostream>
#include<cstring>
#include"Ex07plorg.h"

Plorg::Plorg(const char *n)
{
    strncpy(name,n,LEN-1);
    ci=50;
}
void Plorg::setci(int c)
{
    ci=c;
}
void Plorg::show() const
{
    std::cout<<"Name: "<<name<<" CI: "<<ci<<std::endl;
}