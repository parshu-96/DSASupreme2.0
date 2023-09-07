#include<iostream>
using namespace std;

float degCelsToF(int deg)
{
    return ((deg*9/5)+32);
}  

int main(){
 int n;
    cout<<"Enter Temperature in degree celcius : ";
    cin>>n;
    cout<<n<<" deg celcius is equal to : "<<degCelsToF(n)<<" F";
    return 0;
}