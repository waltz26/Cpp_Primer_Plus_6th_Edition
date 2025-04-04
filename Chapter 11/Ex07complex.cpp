#include"Ex07complex.h"
using std::cout;

Complex::Complex(double r,double i)
{
    real=r;
    imag=i;
}
Complex::Complex()
{
    real=imag=0;
}
Complex::~Complex()
{

}
Complex Complex::operator+(const Complex &b) const
{
    return Complex(real+b.real,imag+b.imag);
}
Complex Complex::operator-(const Complex &b) const
{
    return Complex(real-b.real,imag-b.imag);
}
Complex Complex::operator*(const Complex &b) const
{
    return Complex(real*b.real-imag*b.imag,real*b.imag+imag*b.real);
}
Complex operator*(double x,const Complex &c)
{
    return Complex(x*c.real,x*c.imag);
}
Complex Complex::operator~() const
{
    return Complex(real,-imag);
}
std::istream & operator>>(std::istream &is,Complex &c)
{
    cout<<"real: ";
    if (!(is>>c.real))
        return is;

    cout<<"imaginary: ";
    is>>c.imag;
    return is;
}
std::ostream & operator<<(std::ostream &os,const Complex &c)
{
    cout<<"("<<c.real<<","<<c.imag<<"i)";
    return os;
}