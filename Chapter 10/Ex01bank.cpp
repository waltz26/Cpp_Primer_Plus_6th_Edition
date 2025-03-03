#include<iostream>
#include"Ex01bank.h"

Account::Account()
{
    user="no name";
    id="default";
    money=0;
}
Account::Account(const string &u,const string &i,float m)
{
    user=u;
    id=i;
    money=m;
}
void Account::deposit(float m)
{
    money+=m;
}
void Account::withdraw(float m)
{
    if (money<m)
    {
        std::cout<<"You don't have that much money."<<std::endl;
        return;
    }
    money-=m;
}
void Account::show() const
{
    std::cout<<"User name: "<<user<<" Account id: "<<id
        <<" Saving: "<<money<<std::endl;
}