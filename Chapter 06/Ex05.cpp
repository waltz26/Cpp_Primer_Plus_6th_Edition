#include<iostream>
using namespace std;
int main()
{
    int income;
    double tax;

    cout<<"Enter a income (negative num or \'q\' to quit): ";
    while (cin>>income)
    {
        if (!cin||income<0)
            break;

        if (income<=5000)
            tax=0;
        else if (income<=15000)
            tax=(income-5000)*0.1;
        else if (income<=35000)
            tax=10000*0.1+(income-15000)*0.15;
        else
            tax=10000*0.1+20000*0.15+(income-35000)*0.2;
        cout<<"income tax: "<<tax<<"tvarp"<<endl;

        cout<<"Enter a income (negative num or \'q\' to quit): ";
    }

    return 0;
}