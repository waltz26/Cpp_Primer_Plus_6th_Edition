#include<iostream>
using namespace std;
int main()
{
    const char *year[3]={"1st","2nd","3rd"};
    const char *month[12]={"January","February","March","April","May","June",
        "July","August","September","October","November","December"};
    int sale[3][12];
    int sum,total=0;

    cout<<"Enter the number of sales for each month of the three years"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<"---The "<<year[i]<<" year---"<<endl;

        sum=0;
        for (int j=0;j<12;j++)
        {
            cout<<month[j]<<": ";
            cin>>sale[i][j];
            sum+=sale[i][j];
        }
        cout<<"The total sales volume of this year is "<<sum<<"."<<endl;

        total+=sum;
    }

    cout<<"The total sales volume of three years is "<<total<<"."<<endl;
    return 0;
}