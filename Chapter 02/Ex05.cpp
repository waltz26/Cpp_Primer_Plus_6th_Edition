#include<bits/stdc++.h>
using namespace std;

double convert(int x);

int main()
{
    int c;

    cout<<"Please enter a Celsius value: ";
    cin>>c;
    cout<<c<<" degrees Celsius is "<<convert(c)<<" degrees Fahrenheit."<<endl;

    return 0;
}
double convert(int x)
{
    return 1.8*x+32;
}