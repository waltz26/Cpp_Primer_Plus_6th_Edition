#include<iostream>
using namespace std;

const int seasons=4;
const char *snames[seasons]={
    "Spring","Summer","Fall","Winter"
};

struct Expense{
    double value[seasons];
};

void fill(Expense *a,int n);
void show(Expense a,int n);

int main()
{
    Expense expenses;
    fill(&expenses,seasons);
    show(expenses,seasons);
    return 0;
}
void fill(Expense *a,int n)
{
    for (int i=0;i<seasons;i++)
    {
        cout<<"Enter "<<snames[i]<<" expenses: ";
        cin>>a->value[i];
    }
}
void show(Expense a,int n)
{
    double total=0.0;
    cout<<"EXPENSES\n";
    for (int i=0;i<seasons;i++)
    {
        cout<<snames[i]<<": $"<<a.value[i]<<endl;
        total+=a.value[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}