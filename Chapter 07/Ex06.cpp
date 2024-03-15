#include<iostream>
using namespace std;

const int num=10;

int fill_array(double a[],int n);
void show_array(const double a[],int n);
void reverse_array(double a[],int n);

int main()
{
    double a[num];
    int read;

    read=fill_array(a,num);
    show_array(a,read);
    reverse_array(a,read);
    show_array(a,read);

    return 0;
}
int fill_array(double a[],int n)
{
    int i;

    cout<<"Enter the data (q to quit)"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"float#"<<i+1<<": ";
        cin>>a[i];

        if (!cin)
            break;
    }

    return i;
}
void show_array(const double a[],int n)
{
    cout<<"Data:"<<endl;

    for (int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<endl;
}
void reverse_array(double a[],int n)
{
    double swap;

    for (int i=1,j=n-2;i<j;i++,j--)
    {
        swap=a[i];
        a[i]=a[j];
        a[j]=swap;
    }

    cout<<"The array has been reversed."<<endl;
}