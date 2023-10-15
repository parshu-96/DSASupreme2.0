#include <iostream>
using namespace std;

int searchNearlySorted(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid - 1 >= 0 && (arr[mid - 1] == target))
        {
            return mid - 1;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid + 1 < size && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            // Right
            s = mid + 2;
        }
        else
        {
            // Left
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 600;

    int targetIndex = searchNearlySorted(arr, n, target);
    if (targetIndex != -1)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
    return 0;
}