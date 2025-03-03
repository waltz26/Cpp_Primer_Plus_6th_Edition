#include<iostream>
#include"Ex03golf.h"

using std::cout;
using std::endl;

int main()
{
    Golf a("Alex",9);
    cout<<"#1 show:"<<endl;
    a.showgolf();

    a.setgolf();
    cout<<"#2 show:"<<endl;
    a.showgolf();

    a.sethandicap(5);
    cout<<"#3 show:"<<endl;
    a.showgolf();

    return 0;
}