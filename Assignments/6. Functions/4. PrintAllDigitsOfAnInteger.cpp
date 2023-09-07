#include<iostream>
using namespace std;

int reversInt(int n)
{
    int rem=0;
    int newNum=0;
    while(n>0)
    {
        rem=n%10;
        newNum=newNum*10+rem;
        n=n/10;
    }
    return newNum;
}

string printString(int n){
    switch (n)
    {
    case 0:return "Zero ";

    case 1:return "One ";

    case 2:return "Two ";

    case 3:return "Three ";

    case 4:return "Four ";

    case 5:return "Five ";

    case 6:return "Six ";

    case 7:return "Seven ";

    case 8:return "Eight ";

    case 9:return "Nine ";

    }
}

void printDigits(int n)
{
    int rem=0;
    string str;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        str=printString(rem)+str;
    }
    cout<<str;
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    printDigits(n);
    return 0;
}