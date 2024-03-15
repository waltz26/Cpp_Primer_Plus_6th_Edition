#include<iostream>
using namespace std;

long double probability(unsigned number,unsigned picks);

int main()
{
    cout<<"You have one chance in "<<probability(47,5)*probability(27,1)<<" of winning.";
    return 0;
}
long double probability(unsigned number,unsigned picks)
{
    long double result=1.0;
    long double n;
    unsigned p;

    for (n=number,p=picks;p>0;n--,p--)
        result=result*n/p;
    return result;
}