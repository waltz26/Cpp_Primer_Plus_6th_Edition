#include<iostream>
using namespace std;
int main()
{
    struct snack{
        char brand[20];
        double weight;
        int calorie;
    }CandyBar[3]={
        {"Mocha Munch",2.3,350},
        {"Dumpling",4.1,500},
        {"Omelets",3.4,150},
    };

    cout<<CandyBar[0].brand<<' '<<CandyBar[0].weight<<' '<<CandyBar[0].calorie<<endl;
    cout<<CandyBar[1].brand<<' '<<CandyBar[1].weight<<' '<<CandyBar[1].calorie<<endl;
    cout<<CandyBar[2].brand<<' '<<CandyBar[2].weight<<' '<<CandyBar[2].calorie<<endl;
    return 0;
}