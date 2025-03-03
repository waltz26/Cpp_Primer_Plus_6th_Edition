#include"Ex05stack.h"

int main()
{
    Stack s;

    Item a={"Tom",60.9},b={"Alex",1549.5},c={"John",0.5};
    Item ret;

    s.push(a);
    s.push(b);
    s.pop(ret);
    s.push(c);
    s.pop(ret);
    s.pop(ret);

    return 0;
}