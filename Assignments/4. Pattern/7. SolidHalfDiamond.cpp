// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of Rows : ";
    cin >> n;
    int row = 0;
    for (; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    row=row-2;
    for (; row >= 0; row--)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}