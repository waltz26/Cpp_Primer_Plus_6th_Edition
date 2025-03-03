#ifndef CLASS_H_
#define CLASS_H_

#include<string>

class Person{
private:
    static const int LIMIT=25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() {lname="";fname[0]='\0';}
    Person(const std::string &ln,const char *fn="Heyyou");
    void show() const;
    void formalshow() const;
};

#endif
