#include<bits/stdc++.h>
using namespace std;

struct pizza{
    char company_name[60];
    double diameter,weight;
};

int main()
{
    pizza *p=new pizza;

    cout<<"Enter the diameter of the pizza: ";
    cin>>p->diameter;
    cout<<"Enter the name of the pizza company: ";
    cin.get();
    cin.getline(p->company_name,60);
    cout<<"Enter the weight of the pizza: ";
    cin>>p->weight;

    cout<<"Company name: "<<p->company_name<<endl;
    cout<<"Diameter: "<<p->diameter<<" and weight: "<<p->weight<<endl;

    delete p;
    return 0;
}