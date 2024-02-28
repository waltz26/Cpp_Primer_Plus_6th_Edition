#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word[64];
    int count=0;

    cout<<"Enter words (to stop, type the word done)"<<endl;
    cin>>word;
    while (strcmp(word,"done"))
    {
        count++;
        cin>>word;
    }

    cout<<"You entered a total of "<<count<<" words."<<endl;
    return 0;
}