#include<iostream>
using namespace std;

template <typename T>
T max5(T a[]);

int main()
{
    int test1[5]={2,9,1,4,7};
    double test2[5]={2e17,4.7e20,55e19,223e18};

    cout<<"test1: "<<max5(test1)<<endl;
    cout<<"test2: "<<max5(test2)<<endl;
    return 0;
}
template <typename T>
T max5(T a[])
{
    T maxn=a[0];

    for (int i=1;i<5;i++)
        if (a[i]>maxn)
            maxn=a[i];

    return maxn;
}