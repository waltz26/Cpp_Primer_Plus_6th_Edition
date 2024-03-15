#include<iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volumme;
};

void show(box a);
float volumme(box *a);

int main()
{
    box example={"xxx",5,6,7,0};

    show(example);

    return 0;
}
void show(box a)
{
    cout<<a.maker<<endl;
    cout<<"Height: "<<a.height<<endl;
    cout<<"width: "<<a.width<<endl;
    cout<<"length: "<<a.length<<endl;
    cout<<"Volumme: "<<volumme(&a)<<endl;
}
float volumme(box *a)
{
    return a->height*a->width*a->length;
}