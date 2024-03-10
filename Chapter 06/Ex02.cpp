#include<iostream>
using namespace std;
int main()
{
    double a[10];
    double sum=0,average;
    int count=0,high=0;

    cout<<"Enter a donation amount: ";
    cin>>a[0];
    sum+=a[0];
    while (++count<10)
    {
        cout<<"Enter next donation amount: ";
        if (!(cin>>a[count]))
            break;
        sum+=a[count];
    }

    average=sum/count;
    for (int i=0;i<count;i++)
        if (a[i]>average)
            high++;

    cout<<"Average: "<<average<<endl;
    cout<<"There are "<<high<<" number(s) that are greater than the average"<<endl;
    return 0;
}