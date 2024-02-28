#include<iostream>
using namespace std;

const int convert_rate=12;

int main()
{
    int height;

    cout<<"Enter your height in inches:____\b\b\b\b";
    cin>>height;
    cout<<"You are "<<height/convert_rate<<" feet "
        <<height%convert_rate<<" inches tall."<<endl;

    return 0;
}