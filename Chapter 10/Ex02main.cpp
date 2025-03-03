#include"Ex02class.h"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy","Sam");

    one.show();
    one.formalshow();

    two.show();
    two.formalshow();

    three.show();
    three.formalshow();

    return 0;
}