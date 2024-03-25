#include<iostream>
using namespace std;

void print(const char *s);
void print(const char *s,int n);

int main()
{
    print("test...test...");
    print("test...test...",1);
    print("test...test...",1);

    return 0;
}
void print(const char *s)
{
    cout<<"print(const char *):"<<endl;
    cout<<s<<endl;
}
void print(const char *s,int n)
{
    static int call=0;    //Chapter 09

    cout<<"print(const char *,int):"<<endl;

    if (n)
    {
        call++;
        for (int i=0;i<call;i++)
            cout<<s<<endl;
    }
}