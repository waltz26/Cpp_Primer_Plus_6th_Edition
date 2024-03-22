#include<iostream>
#include<string>
using namespace std;

struct patron{
    string name;
    double money;
};

int main()
{
    int n,count1=0,count2=0;

    cout<<"Enter the number of donors: ";
    cin>>n;

    patron *patrons=new patron[n];
    for (int i=0;i<n;i++)
    {
        while (cin.get()!='\n');

        cout<<"donor#"<<i+1<<endl;
        cout<<"name: ";
        getline(cin,patrons[i].name);
        cout<<"money: ";
        cin>>patrons[i].money;
    }

    cout<<">Grand Patrons"<<endl;
    for (int i=0;i<n;i++)
        if (patrons[i].money>10000)
        {
            count1++;
            cout<<patrons[i].name<<' '<<patrons[i].money<<'$'<<endl;
        }
    if (!count1) cout<<"none"<<endl;

    cout<<">Patrons"<<endl;
    for (int i=0;i<n;i++)
        if (patrons[i].money<=10000)
        {
            count2++;
            cout<<patrons[i].name<<' '<<patrons[i].money<<'$'<<endl;
        }
    if (!count2) cout<<"none"<<endl;

    delete [] patrons;
    return 0;
}