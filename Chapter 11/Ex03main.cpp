#include<iostream>
#include<cstdlib>
#include<ctime>
#include<climits>
#include"Ex03vector.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0));

    Vector step;
    Vector result(0.0,0.0);
    double direction;
    unsigned long steps=0;
    unsigned long max_steps=0,min_steps=LONG_MAX,total_step=0;
    double target,dstep;
    int n;

    cout<<"Enter the number of tests: ";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"#"<<i+1<<"\nEnter target distance: ";
        cin>>target;
        cout<<"Enter step length: ";
        cin>>dstep;

        while (result.magval()<target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vector::POL);
            result=result+step;
            steps++;
        }

        total_step+=steps;
        max_steps=max_steps<steps?steps:max_steps;
        min_steps=min_steps>steps?steps:min_steps;

        steps=0;
        result.reset(0.0,0.0);
    }

    double avg_step=1.0*total_step/n;
    cout<<"Max: "<<max_steps<<", Min: "<<min_steps<<", Avg: "<<avg_step<<endl;

    return 0;
}