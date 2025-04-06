#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Exqueue.h"
const int MIN_PER_HR=60;

bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    srand(time(0));

    cout<<"Case Study: Bank of Heather Atuomatic Teller\n";
    cout<<"Enter maximum size of queue: ";
    int qs;
    cin>>qs;

    Item temp;
    int cyclelimit=MIN_PER_HR*100;    //100 hours
    int cust_per_hour=0;    //start from 1 customer
    int wait_time1,wait_time2;
    int line_wait;
    int served;
    double min_per_cust;
    double average_wait_time=0.0;

    while (average_wait_time<1)
    {
        Queue line1(qs),line2(qs);
        wait_time1=wait_time2=line_wait=served=0;
        cust_per_hour++;
        min_per_cust=(double)MIN_PER_HR/cust_per_hour;

        for (int cycle=0;cycle<cyclelimit;cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (!(line1.isfull()&&line2.isfull()))
                {
                    temp.set(cycle);
                    if (line1.queuecount()<line2.queuecount())
                        line1.enqueue(temp);
                    else
                        line2.enqueue(temp);
                }
            }
            if (wait_time1<=0&&!line1.isempty())
            {
                line1.dequeue(temp);
                wait_time1=temp.ptime();
                line_wait+=cycle-temp.when();
                served++;
            }
            if (wait_time2<=0&&!line2.isempty())
            {
                line2.dequeue(temp);
                wait_time2=temp.ptime();
                line_wait+=cycle-temp.when();
                served++;
            }
            if (wait_time1>0)
                wait_time1--;
            if (wait_time2>0)
                wait_time2--;
        }

        average_wait_time=(double)line_wait/served;
        cout<<average_wait_time<<endl;
    }

    cout<<"For the average wait time to exceed 1 minute, "
        <<"the number of customers arriving per hour should be "
        <<cust_per_hour<<'.'<<endl;
    return 0;
}
bool newcustomer(double x)
{
    return (rand()*x/RAND_MAX)<1;
}