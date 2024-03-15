#include<iostream>
using namespace std;

double average(int x,int y);

int main()
{
    int x,y;

    cout<<"Enter two integers (zero to quit): ";
    while (cin>>x>>y)
    {
        if (x==0||y==0) break;
        cout<<"Their reconcile averages is "<<average(x,y)<<"."<<endl;
        cout<<"Enter next two integers (zero to quit): ";
    }

}
double average(int x,int y)
{
    return 2.0*x*y/(x+y);
}