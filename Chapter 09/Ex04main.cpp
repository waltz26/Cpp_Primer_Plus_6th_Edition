#include<iostream>
#include"Ex04head.h"

int main()
{
    using namespace Sales;

    const double ar[3]={1.37e10,1.266e10,7e9};
    sales test1,test2;

    std::cout<<"show test1:"<<std::endl;
    setsales(test1,ar,3);
    showsales(test1);

    std::cout<<"show test2:"<<std::endl;
    setsales(test2);
    showsales(test2);

    return 0;
}