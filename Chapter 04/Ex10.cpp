#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<double,3> a;

    cout<<"Enter the result of your first run: ";
    cin>>a[0];
    cout<<"Second: ";
    cin>>a[1];
    cout<<"third: ";
    cin>>a[2];

    cout<<"The grade point average is: "
        <<(a[0]+a[1]+a[2])/3<<"(s)\n";
    return 0;
}