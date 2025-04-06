#include<iostream>
#include"Ex01cow.h"
using namespace std;

int main()
{
    Cow a;
    Cow b("Lily","eating grass",210);
    Cow c(a);

    a.showcow();
    b.showcow();
    c.showcow();

    c=b;
    c.showcow();

    return 0;
}