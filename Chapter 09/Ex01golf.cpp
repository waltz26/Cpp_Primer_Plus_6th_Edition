#include<iostream>
#include<cstring>
#include"Ex01golf.h"

void setgolf(golf &g,const char *name,int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;
}
int setgolf(golf &g)
{
    using namespace std;

    char name[len];
    int hc;

    cout<<"Enter the golfer's name: ";
    cin>>name;
    if (!strcmp(name,""))
    {
        cout<<"Empty name!"<<endl;
        return 0;
    }
    cout<<"Enter the golf handicap for this player: ";
    cin>>hc;

    setgolf(g,name,hc);
    return 0;
}
void handicap(golf &g,int hc)
{
    g.handicap=hc;
}
void showgolf(const golf &g)
{
    std::cout<<g.fullname<<' '<<g.handicap<<std::endl;
}