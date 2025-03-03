#include<iostream>
#include"Ex04class.h"

int main()
{
    using namespace Sales;

    const double ar[3]={1.37e10,1.266e10,7e9};

    MySales test1(ar,3);
    std::cout<<"show test1:"<<std::endl;
    test1.showsales();

    MySales test2;
    std::cout<<"show test2:"<<std::endl;
    test2.setsales();
    test2.showsales();

    return 0;
}