#include<iostream>
#include<cstring>
#include"Ex02classic.h"

Classic::Classic()
{
    songs=new char[1];
    strcpy(songs,"");
}
Classic::Classic(const char *s,const char *s1,const char *s2,int n,double x):
    Cd(s1,s2,n,x)
{
    int len;

    len=strlen(s);
    songs=new char[len+1];
    strcpy(songs,s);
}
void Classic::report() const
{
    using std::cout;

    Cd::report();
    cout<<'-'<<songs<<"-\n";
}
Classic & Classic::operator=(const Classic &c)
{
    int len;

    if (&c==this)    //防止自我赋值
        return *this;
    Cd::operator=(c);

    delete [] songs;
    len=strlen(c.songs);
    songs=new char[len+1];
    strcpy(songs,c.songs);

    return *this;
}