#include<bits/stdc++.h>
using namespace std;

struct snack{
    char brand[20];
    double weight;
    int calorie;
};

int main()
{
    snack *CandyBar=new snack[3];

    strcpy(CandyBar[0].brand,"Mocha Munch");
    CandyBar[0].weight=2.3; CandyBar[0].calorie=350;
    strcpy(CandyBar[1].brand,"Dumpling");
    CandyBar[1].weight=4.1; CandyBar[1].calorie=500;
    strcpy(CandyBar[2].brand,"Omelets");
    CandyBar[2].weight=3.4; CandyBar[2].calorie=150;

    cout<<(*CandyBar).brand<<' '<<(*CandyBar).weight<<' '<<(*CandyBar).calorie<<endl;
    cout<<(*(CandyBar+1)).brand<<' '<<(*(CandyBar+1)).weight<<' '<<(*(CandyBar+1)).calorie<<endl;
    cout<<(*(CandyBar+2)).brand<<' '<<(*(CandyBar+2)).weight<<' '<<(*(CandyBar+2)).calorie<<endl;
    return 0;
}