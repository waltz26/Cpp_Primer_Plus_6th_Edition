#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>

class Complex{
private:
    double real,imag;
public:
    Complex(double r,double i);
    Complex();
    ~Complex();
    Complex operator+(const Complex &b) const;
    Complex operator-(const Complex &b) const;
    Complex operator*(const Complex &b) const;
    friend Complex operator*(double x,const Complex &c);
    Complex operator~() const;
    friend std::istream & operator>>(std::istream &is,Complex &c);
    friend std::ostream & operator<<(std::ostream &os,const Complex &c);
};

#endif
