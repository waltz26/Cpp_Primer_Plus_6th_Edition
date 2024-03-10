#include<iostream>
using namespace std;
int main()
{
    char choice;

    cout<<"Please enter one of the following choices:\n"
          "c) carniovre           p) pianist\n"
          "t) tree                g) game\n";
    input:cin>>choice;

    switch (choice)
    {
    case 'c':
        break;
    case 'p':
        break;
    case 't':
        cout<<"A maple is a tree."<<endl;
    case 'g':
        break;
    default:
        cout<<"Please enter a c, p, t, or g: ";
        goto input;
    }

    return 0;
}