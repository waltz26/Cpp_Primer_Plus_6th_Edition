#include<iostream>
#include"Ex06stonewt.h"
using namespace std;

int main()
{
    Stonewt a[6]={136,167,154};
    Stonewt cmp(11,0);
    Stonewt maxs,mins;
    int cnt=0;
    double pounds;

    for (int i=3;i<6;i++)
    {
        cin>>pounds;
        a[i]=Stonewt(pounds);
    }

    maxs=mins=a[0];
    for (int i=1;i<6;i++)
    {
        if (a[i]>maxs)
            maxs=a[i];
        if (a[i]<mins)
            mins=a[i];
        if (a[i]>=cmp)
            cnt++;
    }

    cout<<"Max: ";
    maxs.show_stn();
    cout<<"Min: ";
    mins.show_stn();
    cout<<"There are "<<cnt
        <<" element(s) that are greater than or equal to 11 stones\n";

    return 0;
}