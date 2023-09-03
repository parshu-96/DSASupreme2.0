// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of Rows : ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = row; col < n; col++)
        {
            if ((row == 0) || (col == row) || (col == n - 1))
                cout << col + 1 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}