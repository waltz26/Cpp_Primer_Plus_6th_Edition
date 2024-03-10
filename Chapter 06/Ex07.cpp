#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    char head;
    int yy=0,fy=0,other=0;

    cout<<"Enter words (q to quit):"<<endl;
    while (cin>>word&&word!="q")
    {
        head=word[0];
        if (isalpha(head))
        {
            if (head=='a'||head=='A'||head=='e'||head=='E'||head=='i'||
                head=='I'||head=='o'||head=='O'||head=='u'||head=='U')
                yy++;
            else
                fy++;
        }
        else
            other++;
    }

    cout<<yy<<" words beginning with vowels"<<endl;
    cout<<fy<<" words beginning with consonants"<<endl;
    cout<<other<<" others"<<endl;
    return 0;
}