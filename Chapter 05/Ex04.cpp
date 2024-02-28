#include<iostream>
using namespace std;
int main()
{
    double daphne=100,cleo=100;
    int year=0;

    do
    {
        daphne+=10;
        cleo*=1.05;
        year++;

        cout<<daphne<<' '<<cleo<<endl;
    }
    while (daphne>cleo);

    cout<<"After "<<year<<" year(s), ";
    cout<<"the investment value of Cleo will exceed the investment value of Daphne."<<endl;
    cout<<"Daphne: "<<daphne<<"$"<<endl;
    cout<<"Cleo: "<<cleo<<"$"<<endl;
    return 0;
}