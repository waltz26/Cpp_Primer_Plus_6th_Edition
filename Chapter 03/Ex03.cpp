#include<iostream>
using namespace std;

const int convert_rate=60;

int main()
{
    int degree,minute,second;
    double ans;

    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degree;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minute;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>second;

    ans=degree+1.0*(minute*60+second)/(convert_rate*convert_rate);
    cout<<degree<<" degrees, "<<minute<<" minutes, "<<second<<" seconds = "
        <<ans<<" degrees"<<endl;

    return 0;
}