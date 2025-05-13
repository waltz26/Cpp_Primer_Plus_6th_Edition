#ifndef PORT_H_
#define PORT_H_

#include<iostream>

class Port{
private:
    char *brand;
    char style[20];
    int bottles;
public:
    Port(const char *br="none",const char *st="none",int b=0);
    Port(const Port &p);
    virtual ~Port() { delete [] brand; }
    int bottlecount() const { return bottles; }
    virtual void show() const;
    Port & operator=(const Port &p);
    Port & operator+=(int b);
    Port & operator-=(int b);
    friend std::ostream & operator<<(std::ostream &os,const Port &p);
};

class VintagePort:public Port{
private:
    char *nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char *br,const char *st,int b,const char *nn,int y);
    VintagePort(const VintagePort &vp);
    ~VintagePort() { delete [] nickname; }
    virtual void show() const;
    VintagePort & operator=(const VintagePort &vp);
    friend std::ostream & operator<<(std::ostream &os,const VintagePort &vp);
};

//b.
//构造函数本身不继承，要重新定义
//复制构造函数和赋值运算符必须要重新定义，因为派生类有动态内存分配
//bottlecount()，+=和-=运算符不需要重新定义，功能保持相同
//show()是虚函数，需要重新定义

//c.
//赋值运算符的参数不一致不能声明为虚的
//<<运算符是友元函数不能声明为虚的

#endif
