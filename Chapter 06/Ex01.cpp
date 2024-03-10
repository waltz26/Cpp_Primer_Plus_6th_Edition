#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;

    while (cin.get(ch)&&ch!='@')
    {
        if (isdigit(ch))
            continue;
        else if (islower(ch))
            ch=ch-'a'+'A';
        else if (isupper(ch))
            ch=ch-'A'+'a';

        cout<<ch;
    }

    return 0;
}