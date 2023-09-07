#include<iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    int m = sqrt(n);
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number to check prime number from 2 to given number : ";
    cin>>n;
    cout<<"Prime number between 2 to "<<n<<" are :";
    printPrime(n);
    return 0;
}