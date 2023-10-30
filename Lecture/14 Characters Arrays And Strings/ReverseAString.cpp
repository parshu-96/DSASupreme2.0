#include  <iostream>
#include<string.h>
using namespace std;

void reverseString(char arr[],int size)
{
    int i=0;
    int j=size-1;

    while(i<j)
    {
        swap(arr[i++],arr[j--]);
    }
}

int main()
{
    char arr[100];
    cin.getline(arr,100);
    cout<<"Before :"<<arr<<endl;
    reverseString(arr,strlen(arr));
    cout<<"After :"<<arr<<endl;
    return 0;
}