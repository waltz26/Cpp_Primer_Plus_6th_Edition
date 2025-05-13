#include<iostream>
#include"Ex02classic.h"
using namespace std;

void Bravo(const Cd &disk);

int main()
{
    Cd c1("Beatles","Capitol",14,35.5);
    Classic c2=Classic("Piano Sonata in B flat, Fantasia in C",
                    "Alfred Brendel","Philips",2,57.17);
    Cd *pcd=&c1;

    cout<<"Using object directly:\n";
    c1.report();
    c2.report();

    cout<<"\nUsing type Cd * pointer to objects:\n";
    pcd->report();
    pcd=&c2;
    pcd->report();

    cout<<"\nCalling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout<<"\nTesting assignment:\n";
    Classic copy;
    copy=c2;
    copy.report();

    return 0;
}
void Bravo(const Cd &disk)
{
    disk.report();
}