#include<cstring>
#include<cctype>
#include"Ex02string.h"
using std::cin;
using std::cout;

int String::num_strings=0;

String::String(const char *s)
{
    len=std::strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    num_strings++;
}
String::String()
{
    len=4;
    str=new char[1];
    str[0]='\0';
    num_strings++;
}
String::String(const String &s)
{
    num_strings++;
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);
}
String::~String()
{
    --num_strings;
    delete [] str;
}
void String::stringlow()
{
    for (int i=0;i<len;i++)
        if (isupper(str[i]))
            str[i]=str[i]+('a'-'A');
}
void String::stringup()
{
    for (int i=0;i<len;i++)
        if (islower(str[i]))
            str[i]=str[i]+('A'-'a');
}
unsigned int String::has(char c)
{
    int cnt=0;
    for (int i=0;i<len;i++)
        if (str[i]==c)
            cnt++;
    return cnt;
}
String & String::operator=(const String &s)
{
    if (this==&s)
        return *this;
    delete [] str;
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);
    return *this;
}
String & String::operator=(const char *s)
{
    delete [] str;
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    return *this;
}
char & String::operator[](int i)
{
    return str[i];
}
const char & String::operator[](int i) const
{
    return str[i];
}
const String operator+(const String &s1,const String &s2)
{
    char *temp;

    temp=new char[s1.len+s2.len+1];
    strcpy(temp,s1.str);
    strcat(temp,s2.str);

    String st(temp);
    delete [] temp;

    return st;
}
bool operator<(const String &s1,const String &s2)
{
    return strcmp(s1.str,s2.str)<0;
}
bool operator>(const String &s1,const String &s2)
{
    return s2<s1;
}
bool operator==(const String &s1,const String &s2)
{
    return strcmp(s1.str,s2.str)==0;
}
ostream & operator<<(ostream &os,const String &s)
{
    os<<s.str;
    return os;
}
istream & operator>>(istream &is,String &s)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if (is)
        s=temp;
    while (is&&is.get()!='\n')
        continue;
    return is;
}