#include <iostream>
using namespace std;
int findOddOccuringElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        // Single Element
        if (s == e)
        {
            return s;
        }
        // Check if mid is even or odd
        if (mid & 1) // Odd no
        {
            if (mid-1>=0&&arr[mid - 1] == arr[mid])
            {
                // Right me jao
                s = mid + 1;
            }
            else
            {
                // Left me Jao
                e = mid - 1;
            }
        }
        else
        {
            if (mid+1<n&&arr[mid] == arr[mid + 1])
            {
                // Right me jao 
                s = mid + 2;
            }
            else
            {
                // Ya to right part pe khada hu ya to ans ke upar khada hu
                // That's why e=mid;
                // Kyunki e=mid-1 se ans lost ho sakta hai
                e=mid;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[]={10,10,2,2,6,6,5,6,6,2,2,1,1};
    int size=13;
    cout<<"Odd occuring element is "<<arr[findOddOccuringElement(arr,size)];
    return 0;
}