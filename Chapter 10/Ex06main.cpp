#include"Ex06move.h"

int main()
{
    Move m1(1,2);
    m1.showmove();

    Move m2(3,4);
    m2.showmove();

    Move m3;
    m3=m1.add(m2);
    m3.showmove();
    m3.reset(0,0);
    m3.showmove();

    return 0;
}