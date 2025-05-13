#ifndef DMA_H_
#define DMA_H_

#include<iostream>

//抽象基类
class DMA{
private:
    char *label;
    int rating;
public:
    DMA(const char *l="null",int r=0);
    DMA(const DMA &rs);
    virtual ~DMA();
    virtual void view() const = 0;
    DMA & operator=(const DMA &rs);
};

class baseDMA:public DMA{
public:
    baseDMA(const char *l="null",int r=0):DMA(l,r){};
    ~baseDMA();
    virtual void view() const;
};

class lacksDMA:public DMA{
private:
    enum { COL_LEN=40 };
    char color[COL_LEN];
public:
    lacksDMA(const char *c="blank",const char *l="null",int r=0);
    lacksDMA(const char *c,const DMA &rs);
    ~lacksDMA();
    virtual void view() const;
};

class hasDMA:public DMA{
private:
    char *style;
public:
    hasDMA(const char *s="none",const char *l="null",int r=0);
    hasDMA(const hasDMA &rs);
    ~hasDMA();
    virtual void view() const;
    hasDMA & operator=(const hasDMA &rs);
};

#endif
