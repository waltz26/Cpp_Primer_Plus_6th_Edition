#include<bits/stdc++.h>
using namespace std;

const int feet_to_inch=12;
const double inch_to_meter=0.0254;
const double kilo_to_pound=2.2;

int main()
{
    int feet,inch,pound;
    double meter,kilo;

    cout<<"Enter your height in feet and inches (enter separately):";
    cin>>feet>>inch;
    cout<<"Enter your weight in pounds:";
    cin>>pound;

    meter=(feet*feet_to_inch+inch)*inch_to_meter;
    kilo=pound/kilo_to_pound;
    cout<<"Your BMI is "<<kilo/(meter*meter)<<endl;

    return 0;
}