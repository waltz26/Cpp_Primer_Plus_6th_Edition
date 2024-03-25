#include<iostream>
#include<cstring>
using namespace std;

struct candybar{
    char brand[32];
    double weight;
    int energy;
};

void set(candybar &a,const char *brand="Millennium Munch",double weight=2.85,
    int energy=350);
void show(const candybar &a);

int main()
{
    candybar example;

    set(example);
    show(example);

    return 0;
}
void set(candybar &a,const char *brand,double weight,int energy)
{
    strcpy(a.brand,brand);
    a.weight=weight;
    a.energy=energy;
}
void show(const candybar &a)
{
    cout<<a.brand<<' '<<a.weight<<' '<<a.energy<<endl;
}