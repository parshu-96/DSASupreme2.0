#include <iostream>
using namespace std;

int getQuotient(int divisor, int divident)
{
    int s = 0;
    int e = divident;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * divisor == divident)
        {
            return mid;
        }
        if (mid * divisor < divident)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int divisor = -7;
    int divident = 29;
    int ans = getQuotient(abs(divisor),abs(divident));
    if(divisor>0 &&divident>0||divisor<0 &&divident<0)
    {
        //
    }
    else{
        ans=-1*ans;
    }
    cout << "Final Answer is " << ans;
    return 0;
}