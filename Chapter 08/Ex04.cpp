#include<iostream>
#include<cstring>
using namespace std;

struct stringy{
    char *str;
    int ct;
};

void set(stringy &target,const char *s);
void show(const stringy &s,int times=1);
void show(const char *s,int times=1);

int main()
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";

    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");

    delete [] beany.str;
    return 0;
}
void set(stringy &target,const char *s)
{
    target.ct=strlen(s);
    target.str=new char[target.ct+1];
    strcpy(target.str,s);
}
void show(const stringy &s,int times)
{
    for (int i=0;i<times;i++)
        cout<<s.str<<endl;
}
void show(const char *s,int times)
{
    const char *p;

    for (int i=0;i<times;i++)
    {
        p=s;
        while (*p)
            cout<<*p++;
        cout<<'\n';
    }
}