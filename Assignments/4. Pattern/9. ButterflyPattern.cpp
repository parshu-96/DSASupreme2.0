
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Rows : " << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = row; col < n - 1; col++)
        {
            cout << "    ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << "    ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}