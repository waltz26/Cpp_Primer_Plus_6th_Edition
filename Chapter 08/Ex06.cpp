#include<iostream>
#include<cstring>
using namespace std;

template <typename T>
T maxn(T a[],int n);
template <>
const char *maxn<const char *>(const char *a[],int n);

int main()
{
    int test1[6]={2,9,1,4,7,5};
    double test2[4]={2e17,4.7e20,55e19};
    const char *test3[5]={"aa","bbb","c","dddd","ee"};

    cout<<"test1: "<<maxn(test1,6)<<endl;
    cout<<"test2: "<<maxn(test2,4)<<endl;
    cout<<"test3: "<<maxn(test3,5)<<endl;
    return 0;
}
template <typename T>
T maxn(T a[],int n)
{
    T maxn=a[0];

    for (int i=1;i<n;i++)
        if (a[i]>maxn)
            maxn=a[i];

    return maxn;
}
template <> const char *maxn<const char *>(const char *a[],int n)
{
    int maxn=0,maxi;

    for (int i=0;i<n;i++)
    {
        int len=strlen(a[i]);
        if (len>maxn)
        {
            maxn=len;
            maxi=i;
        }
    }

    return a[maxi];
}