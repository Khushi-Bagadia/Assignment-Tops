// 3. String Palindrome Check
// o Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations.


#include<iostream>
using namespace std;
int main()
{
    string s1, temp;
    cout << "Enter the string name: ";
    getline(cin, s1);
    temp = s1;
    int i, length = 0, j = 0;
    char str[100];
    for(i = 0; s1[i] != '\0'; i++)
    {
        length++;
    }

    for(i = length-1; i >= 0; i--)
    {
        str[j] = s1[i];
        j++;
    }

    if (temp == str)
    {
        cout << "This string is palindrome";
    }
    else
    {
        cout << "This string is not palindrome";
    }

    return 0;
}

// o/p:
// Enter the string name: level
// This string is palindrome