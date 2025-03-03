#include"Ex08list.h"

List::List()
{
    cnt=0;
}
void List::add(Item item)
{
    items[cnt++]=item;
}
bool List::isempty() const
{
    return cnt==0;
}
bool List::isfull() const
{
    return cnt==MAX;
}
void List::visit(void (*fp)(Item &))
{
    for (int i=0;i<cnt;i++)
        fp(items[i]);
}