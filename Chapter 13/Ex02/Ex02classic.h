#ifndef CLASSIC_H_
#define CLASSIC_H_

#include"Ex02cd.h"

class Classic:public Cd{
private:
    char *songs;
public:
    Classic();
    Classic(const char *s,const char *s1,const char *s2,int n,double x);
    Classic(const Classic &c);
    virtual void report() const;
    Classic & operator=(const Classic &c);
};

#endif
