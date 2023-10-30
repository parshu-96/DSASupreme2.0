#include <iostream>
#include <string.h>
using namespace std;

bool CheckPalindrome(char ch[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            // chars are not matching
            return false;
        }
        // If you have reached here, string is palindrome
    }
    return true;
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    if (CheckPalindrome(ch, strlen(ch)))
    {
        cout << "String " << ch << " is palindrome";
    }
    else
    {
        cout << "String " << ch << " is not a palindrome";
    }
    return 0;
}