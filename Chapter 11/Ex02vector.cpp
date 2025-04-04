#include<cmath>
#include"Ex02vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR{
    const double Rad_to_deg=45/atan(1.0);

    void Vector::set_x(double mag,double ang)
    {
        x=mag*cos(ang);
    }
    void Vector::set_y(double mag,double ang)
    {
        y=mag*sin(ang);
    }
    Vector::Vector()
    {
        x=y=0.0;
        mode=RECT;
    }
    Vector::Vector(double n1,double n2,Mode form)
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2);
            set_y(n1,n2);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"Vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }
    Vector::~Vector()
    {

    }
    void Vector::reset(double n1,double n2,Mode form)
    {
        mode=form;
        if (form==RECT)
        {
            x=n1;
            y=n2;
        }
        else if (form==POL)
        {
            set_x(n1,n2);
            set_y(n1,n2);
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vector() -- ";
            cout<<"Vector set to 0\n";
            x=y=0.0;
            mode=RECT;
        }
    }
    double Vector::magval() const
    {
        return sqrt(x*x+y*y);
    }
    double Vector::angval() const
    {
        if (x==0.0&&y==0.0)
            return 0.0;
        else
            return atan2(y,x);
    }
    void Vector::polar_mode()
    {
        mode=POL;
    }
    void Vector::rect_mode()
    {
        mode=RECT;
    }
    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x+b.x,y+b.y);
    }
    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(n*x,y-n*y);
    }
    Vector operator*(double n,const Vector &a)
    {
        return a*n;
    }
    std::ostream & operator<<(std::ostream &os,const Vector &v)
    {
        if (v.mode==Vector::RECT)
            os<<"(x,y) = ("<<v.x<<", "<<v.y<<")";
        else if (v.mode==Vector::POL)
        {
            os<<"(m,a) = ("<<v.magval()<<", "<<v.angval()*Rad_to_deg<<")";
        }
        else
            os<<"Vector object mode is invalid";

        return os;
    }
};