#include<iostream>
#include<cmath>
using namespace std;


float areaOfCircle(int r){
    return M_PI*r*r;
}

int main(){
    int r;
    cout<<"Enter radius of the Circle : ";
    cin>>r;
    cout<<"Area of Circle with Radius "<<r<<" is :"<<areaOfCircle(r);
    return 0;
}