#include<iostream>
#include"Ex04stack.h"
using namespace std;

int main()
{
    Stack s1(15);
    Stack s3;
    Item temp;

    for (int i=1;i<=10;i++)
        s1.push(i);

    s1.pop(temp);
    cout<<temp<<'\n';

    //复制构造函数
    Stack s2(s1);
    s2.pop(temp);
    s2.pop(temp);
    cout<<temp<<'\n';

    s1.pop(temp);
    cout<<temp<<'\n';

    //重载赋值运算符
    s3=s2;
    s3.pop(temp);
    s3.pop(temp);
    cout<<temp<<'\n';

    return 0;
}