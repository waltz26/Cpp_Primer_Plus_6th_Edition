#include<iostream>
#include<string>
using namespace std;

const int arsize=10;

void strcount(const string &str);

int main()
{
    string input;

    cout<<"Enter a line:\n";
    while (getline(cin,input))
    {
        if (input=="")
            break;
        strcount(input);
        cout<<"Enter next line (empty line to quit):\n";
    }

    cout<<"Bye\n";
    return 0;
}
void strcount(const string &str)
{
    static int total=0;
    int count=0;

    cout<<"\""<<str<<"\" contains ";
    count=str.size();
    total+=count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total\n";
}