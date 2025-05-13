#include<iostream>
#include<cstring>
#include"Ex03dma.h"

DMA::DMA(const char *l,int r)
{
    int len;

    len=strlen(l);
    label=new char[len+1];
    strcpy(label,l);

    rating=r;
}
DMA::DMA(const DMA &rs)
{
    int len;

    len=strlen(rs.label);
    label=new char[len+1];
    strcpy(label,rs.label);

    rating=rs.rating;
}
DMA::~DMA()
{
    delete [] label;
}
void DMA::view() const
{
    using std::cout;
    using std::endl;

    cout<<"Label: "<<label<<endl;
    cout<<"Rating: "<<rating<<endl;
}
DMA & DMA::operator=(const DMA &rs)
{
    int len;

    if (&rs==this)
        return *this;
    delete [] label;

    len=strlen(rs.label);
    label=new char[len+1];
    strcpy(label,rs.label);

    rating=rs.rating;

    return *this;
}

baseDMA::~baseDMA()
{

}
void baseDMA::view() const
{
    DMA::view();
}

lacksDMA::lacksDMA(const char *c,const char *l,int r):
    DMA(l,r)
{
    strncpy(color,c,39);
    color[39]='\0';
}
lacksDMA::lacksDMA(const char *c,const DMA &rs):
    DMA(rs)
{
    strncpy(color,c,39);
    color[39]='\0';
}
lacksDMA::~lacksDMA()
{

}
void lacksDMA::view() const
{
    DMA::view();
    std::cout<<"Color: "<<color<<std::endl;
}

hasDMA::hasDMA(const char *s,const char *l,int r):
    DMA(l,r)
{
    style=new char[strlen(s)+1];
    strcpy(style,s);
}
hasDMA::hasDMA(const hasDMA &rs):
    DMA(rs)
{
    style=new char[strlen(rs.style)+1];
    strcpy(style,rs.style);
}
hasDMA::~hasDMA()
{
    delete [] style;
}
void hasDMA::view() const
{
    DMA::view();
    std::cout<<"Style: "<<style<<std::endl;
}
hasDMA & hasDMA::operator=(const hasDMA &rs)
{
    if (&rs==this)
        return *this;
    DMA::operator=(rs);
    delete [] style;

    style=new char[strlen(rs.style)+1];
    strcpy(style,rs.style);

    return *this;
}