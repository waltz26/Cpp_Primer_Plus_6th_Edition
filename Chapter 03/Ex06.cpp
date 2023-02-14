#include<bits/stdc++.h>
using namespace std;
int main()
{
    double mileage,gasoline;

    cout<<"Enter the driving mileage in kilometers:";
    cin>>mileage;
    cout<<"Enter the amount of gasoline in liters:";
    cin>>gasoline;

    cout<<"Fuel consumption is "<<100*gasoline/mileage
        <<"l/100km."<<endl;

    return 0;
}