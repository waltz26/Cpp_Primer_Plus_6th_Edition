#include<bits/stdc++.h>
using namespace std;

struct pizza{
    char company_name[60];
    double diameter,weight;
};

int main()
{
    pizza a;

    cout<<"Enter the name of the pizza company: ";
    cin.getline(a.company_name,60);
    cout<<"Enter the diameter of the pizza: ";
    cin>>a.diameter;
    cout<<"Enter the weight of the pizza: ";
    cin>>a.weight;

    cout<<"Company name: "<<a.company_name<<endl;
    cout<<"Diameter: "<<a.diameter<<" and weight: "<<a.weight<<endl;
    return 0;
}