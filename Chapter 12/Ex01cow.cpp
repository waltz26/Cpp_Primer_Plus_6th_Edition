#include<iostream>
#include<cstring>
#include"Ex01cow.h"

Cow::Cow()
{
    strcpy(name,"Kate");
    hobby=new char[5];
    strcpy(hobby,"meow");
    weight=200;
}
Cow::Cow(const char *nm,const char *ho,double wt)
{
    strcpy(name,nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}
Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}
Cow::~Cow()
{
    delete [] hobby;
}
Cow & Cow::operator=(const Cow &c)
{
    if (this==&c)
        return *this;
    delete [] hobby;

    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    return *this;
}
void Cow::showcow() const
{
    std::cout<<"The cow "<<name<<"'s favorite hobby is "<<hobby
        <<", and it weighs "<<weight<<"kg."<<std::endl;
}