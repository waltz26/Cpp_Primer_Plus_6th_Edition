#include<iostream>
using namespace std;

const int Max=5;

double *fill_array(double ar[],int limit);
void show_array(const double *start,const double *end);
void revalue(double r,double *start,double *end);

int main()
{
    double properties[Max];

    double *start=properties;
    double *end=fill_array(properties,Max);
    show_array(start,end);
    if (start!=end)
    {
        cout<<"Enter revaluation factor: ";

        double factor;
        while (!(cin>>factor))
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input; Please enter a number: ";
        }
        revalue(factor,start,end);
        show_array(start,end);
    }

    cout<<"Done.\n";
    return 0;
}
double *fill_array(double ar[],int limit)
{
    double temp;
    int i;

    for (i=0;i<limit;i++)
    {
        cout<<"Enter value #"<<i+1<<": ";
        cin>>temp;

        if (!cin)
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input; input process terminated.\n";
            break;
        }
        else if (temp<0)
            break;

        ar[i]=temp;
    }

    return ar+i;
}
void show_array(const double *start,const double *end)
{
    int i=1;

    while (start!=end)
    {
        cout<<"Property #"<<i<<": $";
        cout<<*start<<endl;
        start++,i++;
    }
}
void revalue(double r,double *start,double *end)
{
    while (start!=end)
    {
        *start=*start*r;
        start++;
    }
}