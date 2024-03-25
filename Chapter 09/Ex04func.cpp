#include<iostream>
#include"Ex04head.h"

namespace Sales{
    void setsales(sales &s,const double ar[],int n)
    {
        double sum,min=1e20,max=0;

        for (int i=0;i<quarters;i++)
        {
            if (i<n)
                s.sales[i]=ar[i];
            else
                s.sales[i]=0;

            sum+=s.sales[i];
            if (s.sales[i]<min) min=s.sales[i];
            if (s.sales[i]>max) max=s.sales[i];
        }

        s.average=sum/quarters;
        s.min=min;
        s.max=max;
    }
    void setsales(sales &s)
    {
        using namespace std;

        double sum,min=1e20,max=0;

        cout<<"Enter the sales for 4 quarters:"<<endl;
        for (int i=0;i<quarters;i++)
        {
            cin>>s.sales[i];
            sum+=s.sales[i];
            if (s.sales[i]<min) min=s.sales[i];
            if (s.sales[i]>max) max=s.sales[i];
        }

        s.average=sum/quarters;
        s.min=min;
        s.max=max;
    }
    void showsales(const sales &s)
    {
        using std::cout;
        using std::endl;

        cout<<"Sales:"<<endl;
        for (int i=0;i<quarters;i++)
        {
            cout<<s.sales[i]<<' ';
        }
        cout<<endl;

        cout<<"Average: "<<s.average<<endl;
        cout<<"Min: "<<s.min<<endl;
        cout<<"Max: "<<s.max<<endl;
    }
}