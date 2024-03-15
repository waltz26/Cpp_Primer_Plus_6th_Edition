#include<iostream>
using namespace std;

double calculate(double x,double y,double (*pf)(double,double));
double add(double x,double y);
double mul(double x,double y);
double div(double x,double y);

double (*pf[3])(double,double)={
    add,mul,div
};

const char *op[3]={"Add","Mul","Div"};

int main()
{
    double x,y;

    cout<<"Enter two floating-point numbers (q to quit): ";
    while (cin>>x>>y)
    {
        if (!cin) break;
        for (int i=0;i<3;i++)
        {
            cout<<op[i]<<": "<<calculate(x,y,pf[i])<<endl;
        }
        cout<<"Enter next two floating-point numbers (q to quit): ";
    }
}
double calculate(double x,double y,double (*pf)(double,double))
{
    return pf(x,y);
}
double add(double x,double y)
{
    return x+y;
}
double mul(double x,double y)
{
    return x*y;
}
double div(double x,double y)
{
    return x/y;
}