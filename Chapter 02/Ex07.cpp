#include<bits/stdc++.h>
using namespace std;

void show_time(int hour,int minute);

int main()
{
    int hour,mintue;

    cout<<"Enter the number of hours: ";
    cin>>hour;
    cout<<"Enter the number of mintues: ";
    cin>>mintue;

    show_time(hour,mintue);

    return 0;
}
void show_time(int hour,int minute)
{
    cout<<"Time: "<<hour<<':'<<minute<<endl;
}