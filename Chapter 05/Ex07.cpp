#include<iostream>
#include<string>
using namespace std;

struct car{
    string manufacturer;
    int year;
};

int main()
{
    int num;

    cout<<"How many cars do you wish to catalog? ";
    cin>>num;

    car *cars=new car[num];
    for (int i=0;i<num;i++)
    {
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make: ";
        cin.get();    //清除换行符
        getline(cin,cars[i].manufacturer);
        cout<<"Please enter the year made: ";
        cin>>cars[i].year;
    }

    cout<<"Here is your collection:"<<endl;
    for (int i=0;i<num;i++)
        cout<<cars[i].year<<" "<<cars[i].manufacturer<<endl;

    delete [] cars;
    return 0;
}