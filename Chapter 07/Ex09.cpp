#include<iostream>
#include<cstring>
using namespace std;

const int slen=30;

struct student{
    char fullname[slen];
    char hobby[slen];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);

int main()
{
    int class_size;

    cout<<"Enter class size: ";
    cin>>class_size;

    while (cin.get()!='\n')
        continue;

    student *ptr_stu=new student[class_size];
    int entered=getinfo(ptr_stu,class_size);
    for (int i=0;i<entered;i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);

    delete [] ptr_stu;
    cout<<"Done\n";
    return 0;
}
int getinfo(student pa[],int n)
{
    int i;

    cout<<"Enter the student information:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"#"<<i+1<<"\nname: ";
        cin.getline(pa[i].fullname,slen);
        if (!strcmp(pa[i].fullname,""))
            break;

        cout<<"hobby: ";
        cin.getline(pa[i].hobby,slen);

        cout<<"ooplevel: ";
        cin>>pa[i].ooplevel;
        while (cin.get()!='\n')
            continue;
    }

    return i;
}
void display1(student st)
{
    cout<<"(MODE1)";
    cout<<st.fullname<<' '<<st.hobby<<' '<<st.ooplevel<<endl;
}
void display2(const student *ps)
{
    cout<<"(MODE2)";
    cout<<ps->fullname<<' '<<ps->hobby<<' '<<ps->ooplevel<<endl;
}
void display3(const student pa[],int n)
{
    cout<<"STUDENT INFORMATION(MODE 3)"<<endl;

    for (int i=0;i<n;i++)
        cout<<pa[i].fullname<<' '<<pa[i].hobby<<' '<<pa[i].ooplevel<<endl;
}