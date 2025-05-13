#include<iostream>
#include<cstring>
#include"Ex02cd.h"

Cd::Cd()
{
    performers=new char[1];
    strcpy(performers,"");

    label=new char[1];
    strcpy(label,"");

    selections=0;
    playtime=0;
}
Cd::Cd(const char *s1,const char *s2,int n,double x)
{
    int len;

    len=strlen(s1);
    performers=new char[len+1];
    strcpy(performers,s1);

    len=strlen(s2);
    label=new char[len+1];
    strcpy(label,s2);

    selections=n;
    playtime=x;
}
Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}
void Cd::report() const
{
    using std::cout;

    cout<<label<<" by "<<performers<<",\n";
    cout<<selections<<" selection(s), "<<playtime<<" minute(s) playtime.\n";
}
Cd & Cd::operator=(const Cd &d)
{
    int len;

    if (&d==this)    //防止自我赋值
        return *this;
    delete [] performers;
    delete [] label;

    len=strlen(d.performers);
    performers=new char[len+1];
    strcpy(performers,d.performers);

    len=strlen(d.label);
    label=new char[len+1];
    strcpy(label,d.label);

    selections=d.selections;
    playtime=d.playtime;

    return *this;
}