#include<iostream>
#include<cstring>
#include"Ex02class.h"

Person::Person(const std::string &ln,const char *fn)
{
    lname=ln;
    strncpy(fname,fn,LIMIT-1);
}
void Person::show() const
{
    std::cout<<fname<<std::endl;
}
void Person::formalshow() const
{
    std::cout<<fname<<", "<<lname<<std::endl;
}