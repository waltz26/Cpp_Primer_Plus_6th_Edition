#ifndef STRING_H_
#define STRING_H_

#include<iostream>
using std::ostream;
using std::istream;

class String{
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM=80;
public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();
    int length() const { return len; }
    void stringlow();
    void stringup();
    unsigned int has(char c);
    String & operator=(const String &s);
    String & operator=(const char *s);
    char & operator[](int i);
    const char & operator[](int i) const;
    friend const String operator+(const String &s1,const String &s2);
    friend bool operator<(const String &s1,const String &s2);
    friend bool operator>(const String &s1,const String &s2);
    friend bool operator==(const String &s1,const String &s2);
    friend ostream & operator<<(ostream &os,const String &s);
    friend istream & operator>>(istream &is,String &s);
    static int howmany();
};

#endif
