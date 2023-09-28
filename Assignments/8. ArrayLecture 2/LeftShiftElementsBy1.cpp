#include<iostream>
using namespace std;

//Right direction Shift
void shiftArrayToLeft(int arr[],int n)
{
    //Step 1
    int temp=arr[0];
    // Step 2 : Shift
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    // Step 3 : Copy temp to n-1 th Index
    arr[n-1]=temp;
}


int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    shiftArrayToLeft(arr,6);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}