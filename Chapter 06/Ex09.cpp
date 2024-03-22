#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct patron{
    string name;
    double money;
};

int main()
{
    ifstream fin;
    fin.open("Ex09.txt");

    int n,count1=0,count2=0;

    fin>>n;

    patron *patrons=new patron[n];
    for (int i=0;i<n;i++)
    {
        while (fin.get()!='\n');

        getline(fin,patrons[i].name);
        fin>>patrons[i].money;
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

    fin.close();
    delete [] patrons;
    return 0;
}