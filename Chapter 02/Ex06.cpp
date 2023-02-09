#include<bits/stdc++.h>
using namespace std;

double convert(double x);

int main()
{
    double light_year;

    cout<<"Enter the number of light years: ";
    cin>>light_year;
    cout<<light_year<<" light years = "<<convert(light_year)
        <<" astronomical units."<<endl;

    return 0;
}
double convert(double x)
{
    return 63240*x;
}