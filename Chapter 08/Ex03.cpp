#include<iostream>
#include<cstring>
using namespace std;

void upper(string &s);

int main()
{
    string s;

    cout<<"Enter a string (q to quit): ";
    while (getline(cin,s)&&s!="q")
    {
        upper(s);
        cout<<s<<endl;
        cout<<"Next string (q to quit): ";
    }
    cout<<"Bye."<<endl;
}
void upper(string &s)
{
    for (auto &i:s)
        i=toupper(i);
}