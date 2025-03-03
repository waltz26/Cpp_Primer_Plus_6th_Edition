#include<iostream>
#include"Ex04class.h"

namespace Sales{
    MySales::MySales(const double ar[],int n)
    {
        double sum;

        min=1e20;
        max=0;
        for (int i=0;i<QUARTERS;i++)
        {
            if (i<n)
                sales[i]=ar[i];
            else
                sales[i]=0;

            sum+=sales[i];
            if (sales[i]<min) min=sales[i];
            if (sales[i]>max) max=sales[i];
        }

        average=sum/QUARTERS;
    }
    void MySales::setsales()
    {
        using namespace std;

        double sum;

        min=1e20;
        max=0;
        cout<<"Enter the sales for 4 quarters:"<<endl;
        for (int i=0;i<QUARTERS;i++)
        {
            cin>>sales[i];
            sum+=sales[i];
            if (sales[i]<min) min=sales[i];
            if (sales[i]>max) max=sales[i];
        }

        average=sum/QUARTERS;
    }
    void MySales::showsales() const
    {
        using std::cout;
        using std::endl;

        cout<<"Sales:"<<endl;
        for (int i=0;i<QUARTERS;i++)
        {
            cout<<sales[i]<<' ';
        }
        cout<<endl;

        cout<<"Average: "<<average<<endl;
        cout<<"Min: "<<min<<endl;
        cout<<"Max: "<<max<<endl;
    }
}