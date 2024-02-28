#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;

    cout<<"Enter two intergers: ";
    cin>>a>>b;

    for (int i=a;i<=b;i++)
        sum+=i;

    cout<<"The sum of integers between "<<a<<" and "
        <<b<<" is "<<sum<<"."<<endl;
    return 0;
}