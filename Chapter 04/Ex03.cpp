#include<bits/stdc++.h>
using namespace std;
int main()
{
    char first_name[20],last_name[20];
    char result[50];

    cout<<"Enter your first name: ";
    cin.getline(first_name,20);
    cout<<"Enter your last name: ";
    cin.getline(last_name,20);

    strcpy(result,last_name);
    strcat(result,", ");
    strcat(result,first_name);

    cout<<"Here's the information in a single string: "<<result<<endl;
    return 0;
}