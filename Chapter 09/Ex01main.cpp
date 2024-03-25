#include<iostream>
#include"Ex01golf.h"

using std::cout;
using std::endl;

int main()
{
    golf a;

    setgolf(a,"Alex",9);
    cout<<"#1 show:"<<endl;
    showgolf(a);

    setgolf(a);
    cout<<"#2 show:"<<endl;
    showgolf(a);

    handicap(a,5);
    cout<<"#3 show:"<<endl;
    showgolf(a);

    return 0;
}