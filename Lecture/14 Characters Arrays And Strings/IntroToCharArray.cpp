#include<iostream>
#include<string.h>
using namespace std;

int findLen(char ch[],int size)
{
    int len=0;
    for(int i=0;i<size;i++)
    {
        if(ch[i]=='\0')
        {
            return len;
        }
        else{
            len++;
        }
    }
    return len;
}

int main()
{
    // char ch[100 ]; 
    // cout<<"Enter String :";
    // // cin>>ch;
    // cin.getline(ch,99);
    // cout<<"Printing the Value of ch :"<<ch<<endl;
    // for(int i=0;i<10;i++)
    // {
    //     cout<<"At Index : "<<i<<" "<<ch[i]<<endl;
    // }   

    //Length of String
    char ch[100];
    // cin>>ch;
    cin.getline(ch,99);
    int len=findLen(ch,100);
    cout<<"Length of Array is "<<len<<endl;
     cout<<"Length of Array is "<<strlen(ch)<<endl;
    return 0;
}