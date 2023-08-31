#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // Print half pyramid pattern
    // * 
    // * *
    // * * *
    // * * * *
    // * * * * *
    
    // Loop through each row
    for (int row = 0; row < n; row++)
    {
        // Loop through each column in the current row
        for (int col = 0; col <= row; col++)
        {
            // Print a star for each column in the current row
            cout << "* ";
        }
        cout << endl; // Move to the next line after completing a row
    }

    return 0;
}
