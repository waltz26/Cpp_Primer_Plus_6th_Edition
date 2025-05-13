#ifndef CLASSIC_H_
#define CLASSIC_H_

#include"Ex01cd.h"

class Classic:public Cd{
private:
    char songs[100];
public:
    Classic();
    Classic(const char *s,const char *s1,const char *s2,int n,double x);
    ~Classic();
    virtual void report() const;
};

#endif
