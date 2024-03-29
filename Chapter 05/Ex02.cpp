#include<iostream>
#include<array>
const int ArSize=101;

int main()
{
    std::array<long double,ArSize> factorials;
    factorials[0]=factorials[1]=1.0L;

    for (int i=2;i<ArSize;i++)
        factorials[i]=i*factorials[i-1];

    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    for (int i=0;i<ArSize;i++)
        std::cout<<i<<"!= "<<factorials[i]<<std::endl;

    return 0;
}