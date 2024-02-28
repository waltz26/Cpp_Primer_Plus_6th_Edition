#include<iostream>
using namespace std;
int main()
{
    struct snack{
        char brand[20];
        double weight;
        int calorie;
    }CandyBar={
        "Mocha Munch",
        2.3,
        350,
    };

    cout<<CandyBar.brand<<' '<<CandyBar.weight<<' '<<CandyBar.calorie<<endl;
    return 0;
}