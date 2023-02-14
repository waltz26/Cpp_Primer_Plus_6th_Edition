#include<bits/stdc++.h>
using namespace std;

const int minute_to_second=60;
const int hour_to_minute=60;
const int day_to_hour=24;

int main()
{
    long long day,hour,minute,second;

    cout<<"Enter the number of seconds: ";
    cin>>second;
    cout<<second<<" seconds = ";

    minute=second/minute_to_second;
    second%=minute_to_second;
    hour=minute/hour_to_minute;
    minute%=hour_to_minute;
    day=hour/day_to_hour;
    hour%=day_to_hour;

    cout<<day<<" days, "<<hour<<" hours, "
        <<minute<<" mintues, "<<second<<" seconds"<<endl;

    return 0;
}