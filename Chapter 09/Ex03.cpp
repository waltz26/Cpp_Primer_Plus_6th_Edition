#include<iostream>
using namespace std;

struct chaff{
    char dross[20];
    int slag;
};

char buffer[512];

int main()
{
    cout<<"Buffer address: "<<(int *)buffer<<endl;

    chaff *test1=new (buffer) chaff[2];
    cout<<"test1 address: "<<test1<<endl;

    /*
        ...test1 set and show
    */

    chaff *test2=new chaff[2];
    cout<<"test2 address: "<<test2<<endl;

    /*
        ...test2 set and show
    */

   return 0;
}