#include<iostream>
using namespace std;

double f(int n);

int main()
{
    int n;

    cout<<"Enter an integer (negative num to quit): ";
    while (cin>>n&&n>=0)
    {
        cout<<n<<"! = "<<f(n)<<endl;
        cout<<"Enter next integer (negative num to quit): ";
    }

}
double f(int n)
{
    if (n>0)
        return n*f(n-1);
    else
        return 1;
}