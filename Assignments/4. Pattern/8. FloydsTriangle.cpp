// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;
    int num = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            if (num < 10)
            {
                cout << num++ << "  ";
            }
            else
            {
                cout << num++ << " ";
            }
        }
        cout << endl;
    }
    return 0;
}