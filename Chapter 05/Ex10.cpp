#include<iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter number of rows: ";
    cin>>row;

    for (int i=0;i<row;i++)
    {
        int j=0;
        for (j=0;j<row-i-1;j++)
            cout<<'.';
        for (;j<row;j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}