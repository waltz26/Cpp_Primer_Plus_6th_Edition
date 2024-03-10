#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("Ex08.txt");

    char ch;
    int count=0;

    while (fin.get(ch))
        count++;

    cout<<"The document has a total of "<<count<<" character(s)."<<endl;

    fin.close();
    return 0;
}