#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    cout<<"Enter a number (zero to quit): ";
    cin>>num;
    while (num)
    {
        sum+=num;
        cout<<"Enter the next number (zero to quit): ";
        cin>>num;
    }

    cout<<"The sum of all inputs is "<<sum<<"."<<endl;
    return 0;
}