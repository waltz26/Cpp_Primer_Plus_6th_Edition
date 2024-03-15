#include<iostream>
using namespace std;

int read(double score [],int max);
void show(const double score [],int n);
double average(const double score[],int n);

int main()
{
    double score[10];
    int n;

    n=read(score,10);
    show(score,n);

    return 0;
}
int read(double score [],int max)
{
    int i;

    cout<<"Enter the golf score (negative num or q to quit)"<<endl;
    for (i=0;i<max;i++)
    {
        cout<<"score#"<<i+1<<": ";
        cin>>score[i];

        if (!cin||score[i]<0)
            break;
    }

    return i;
}
void show(const double score [],int n)
{
    cout<<"Score:"<<endl;
    for (int i=0;i<n;i++)
        cout<<score[i]<<' ';
    cout<<endl;

    cout<<"Average: "<<average(score,n)<<endl;
}
double average(const double score[],int n)
{
    double sum=0;

    for (int i=0;i<n;i++)
        sum+=score[i];

    return sum/n;
}