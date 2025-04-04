#include<fstream>
#include<cstdlib>
#include<ctime>
#include"Ex01vector.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0));

    Vector step;
    Vector result(0.0,0.0);
    ofstream fout;
    double direction;
    unsigned long steps=0;
    double target=100;
    double dstep=20;

    fout.open("thewalk.txt");
    fout<<"Target Distance: "<<target<<", Step Size: "<<dstep<<endl;

    while (result.magval()<target)
    {
        direction=rand()%360;
        step.reset(dstep,direction,Vector::POL);
        result=result+step;
        fout<<steps++<<": (x,y) = ("<<result.xval()<<", "<<result.yval()<<")"<<endl;
    }

    fout<<"After "<<steps<<" steps, the subject "<<"has the following location:\n";
    fout<<result<<endl;
    result.polar_mode();
    fout<<" or\n"<<result<<endl;
    fout<<"Average outward distance per step = "<<result.magval()/steps<<endl;

    return 0;
}