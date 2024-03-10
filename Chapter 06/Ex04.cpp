#include<iostream>
using namespace std;

const int strsize=64;
const int memsize=5;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;    //0=fullname, 1=title, 2=bopname
};

int main()
{
    bop members[memsize]={
        {"Wimp Macho","Wimp Macho","jeb",0},
        {"Raki Rhodes","Junior Programmer","raki",1},
        {"Celia Laiter","MIPS","CL",2},
        {"Hoppy Hipman","Analyst Trainee","hoppyH",1},
        {"Pat Hand","LOOPY","PATHAND",0},
    };
    char choice;

    cout<<"Benevolent Order of Programmers Report\n"
        <<"a. display by name     b. display by title\n"
        <<"c. display by bopname  d. display by preference\n";
    cout<<"Enter you choice: ";

    while (cin>>choice&&choice!='q')
    {
        switch (choice)
        {
        case 'a':
            for (int i=0;i<memsize;i++)
                cout<<members[i].fullname<<endl;
            break;
        case 'b':
            for (int i=0;i<memsize;i++)
                cout<<members[i].title<<endl;
            break;
        case 'c':
            for (int i=0;i<memsize;i++)
                cout<<members[i].bopname<<endl;
            break;
        case 'd':
            for (int i=0;i<memsize;i++)
            {
                if (members[i].preference==0)
                    cout<<members[i].fullname<<endl;
                else if (members[i].preference==1)
                    cout<<members[i].title<<endl;
                else
                    cout<<members[i].bopname<<endl;
            }
        default:
            break;
        }

        cout<<"Enter you choice: ";
    }

    cout<<"Bye!"<<endl;
    return 0;
}