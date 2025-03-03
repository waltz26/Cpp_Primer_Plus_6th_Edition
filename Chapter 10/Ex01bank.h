#ifndef BANK_H_
#define BANK_H_

#include<string>
using std::string;

class Account{
private:
    string user;
    string id;
    float money;
public:
    Account();
    Account(const string &u,const string &i,float m);
    void deposit(float m);
    void withdraw(float m);
    void show() const;
};

#endif
