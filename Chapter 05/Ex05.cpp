#include<iostream>
using namespace std;
int main()
{
    const char *month[12]={"January","February","March","April","May","June",
        "July","August","September","October","November","December"};
    int sale[12];
    int sum=0;

    cout<<"Enter the number of sales for each month throughout the year"<<endl;
    for (int i=0;i<12;i++)
    {
        cout<<month[i]<<": ";
        cin>>sale[i];
    }

    for (int i=0;i<12;i++)
        sum+=sale[i];
    cout<<"The total sales volume is "<<sum<<"."<<endl;
}