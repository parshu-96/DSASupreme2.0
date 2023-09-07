#include<iostream>
using namespace std;

const float MILES_CONST=0.621371;

float kmToMiles(int n){
    return MILES_CONST*n;
}

int main(){
    int n;
    cout<<"Enter distance in km : ";
    cin>>n;
    cout<<"Distance of "<<n<<" km in miles in :"<<kmToMiles(n);
    return 0;
}