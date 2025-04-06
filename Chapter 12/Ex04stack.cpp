#include<iostream>
#include"Ex04stack.h"

Stack::Stack(int n)
{
    if (n>MAX)
    {
        std::cout<<"Cannot create such a large stack. set n to "
                 <<MAX<<std::endl;
        n=MAX;
    }

    pitems=new Item[n];
    size=n;
    top=0;
}
Stack::Stack(const Stack &s)
{
    size=s.size;
    top=s.top;

    pitems=new Item[size];
    for (int i=0;i<top;i++)
        pitems[i]=s.pitems[i];
}
Stack::~Stack()
{
    delete [] pitems;
}
bool Stack::isempty() const
{
    return top==0;
}
bool Stack::isfull() const
{
    return top==size;
}
bool Stack::push(const Item &item)
{
    if (top<size)
    {
        pitems[top++]=item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item)
{
    if (top>0)
    {
        item=pitems[--top];
        return true;
    }
    else
        return false;
}
Stack & Stack::operator=(const Stack &s)
{
    if (this==&s)
        return *this;
    delete [] pitems;

    size=s.size;
    top=s.top;
    pitems=new Item[size];
    for (int i=0;i<top;i++)
        pitems[i]=s.pitems[i];

    return *this;
}