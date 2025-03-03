#include"Ex01bank.h"

int main()
{
    Account a;
    Account b("Caixing","waltz26",1000.0);

    a.show();
    b.show();

    //存款
    b.deposit(1250);
    b.show();

    //取款
    b.withdraw(500);
    b.show();

    return 0;
}