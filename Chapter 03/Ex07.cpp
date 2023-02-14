#include<bits/stdc++.h>
using namespace std;

const double kilometer_to_mile=0.6214;
const double liter_to_gallon=1/3.875;

int main()
{
    double mileage,gasoline;

    cout<<"Enter the driving mileage in kilometers:";
    cin>>mileage;
    cout<<"Enter the amount of gasoline in liters:";
    cin>>gasoline;

    mileage*=kilometer_to_mile;
    gasoline*=liter_to_gallon;
    cout<<"Fuel consumption is "<<mileage/gasoline
        <<"mpg."<<endl;

    return 0;
}