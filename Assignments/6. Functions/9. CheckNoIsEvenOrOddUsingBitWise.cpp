#include<iostream>
using namespace std;

bool checkEven(int n)
{
    if((n&1)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int n;
 cout<<"Enter number to check if a number is even or not : ";
    cin>>n;
    if(checkEven(n))
    {
        cout<<n<<" is an even number";
    }
    else
    {
        cout<<n<<" is an odd number";
    }

    return 0;
}