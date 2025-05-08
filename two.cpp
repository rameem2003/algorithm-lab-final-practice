// Palindrome
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "The Given string is palindrome" << endl;
    else
        cout << "The Given string is not palindrome" << endl;

    return 0;
}
