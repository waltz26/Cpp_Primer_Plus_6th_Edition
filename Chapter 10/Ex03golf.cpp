#include<iostream>
#include<cstring>
#include"Ex03golf.h"

Golf::Golf(const char *name,int hc)
{
    strncpy(fullname,name,LEN-1);
    handicap=hc;
}
void Golf::setgolf()
{
    using namespace std;

    char name[LEN];
    int hc;

    cout<<"Enter the golfer's name: ";
    cin>>name;
    if (!strcmp(name,""))
    {
        cout<<"Empty name!"<<endl;
        return;
    }
    cout<<"Enter the golf handicap for this player: ";
    cin>>hc;

    *this=Golf(name,hc);
}
void Golf::sethandicap(int hc)
{
    handicap=hc;
}
void Golf::showgolf() const
{
    std::cout<<fullname<<' '<<handicap<<std::endl;
}