#include<iostream>
using namespace std;

const int seasons=4;
const char *snames[seasons]={
    "Spring","Summer","Fall","Winter"
};

void fill(double a[],int n);
void show(const double a[],int n);

int main()
{
    double expenses[seasons];
    fill(expenses,seasons);
    show(expenses,seasons);
    return 0;
}
void fill(double a[],int n)
{
    for (int i=0;i<seasons;i++)
    {
        cout<<"Enter "<<snames[i]<<" expenses: ";
        cin>>a[i];
    }
}
void show(const double a[],int n)
{
    double total=0.0;
    cout<<"EXPENSES\n";
    for (int i=0;i<seasons;i++)
    {
        cout<<snames[i]<<": $"<<a[i]<<endl;
        total+=a[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}