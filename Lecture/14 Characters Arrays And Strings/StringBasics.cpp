#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<name<<endl;
    cout<<"Printing First Char :"<<name[0]<<endl;
    int index=0;
    while(name[index]!='\0')
{
    cout<<"Index :"<<index<<" Char :"<<name[index++]<<endl;
}
    return 0;
}