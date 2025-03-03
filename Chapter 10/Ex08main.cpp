#include<iostream>
#include"Ex08list.h"
using namespace std;

void show(Item &item);
void showinline(Item &item);

int main()
{
    List a;
    cout<<"#1"<<endl<<"Empty?: "<<a.isempty()<<endl;

    for (int i=0;i<10;i++)
        a.add((Item)i);
    cout<<"#2"<<endl<<"Full?: "<<a.isfull()<<endl;

    cout<<"#3"<<endl<<"Show the list:"<<endl;
    a.visit(show);
    a.visit(showinline);

    return 0;
}
void show(Item &item)
{
    cout<<item<<endl;
}
void showinline(Item &item)
{
    cout<<item<<' ';
}