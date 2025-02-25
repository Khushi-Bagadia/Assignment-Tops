// 2. Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions.

#include<iostream>
using namespace std;
int fact(int n)
{
    if (n != 0)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num, ans;
    cout << "Enter the number: ";
    cin >> num;
    ans = fact(num);
    cout << "The factorial of "<< num <<" is: " << ans;
    return 0;
}

// o/p:
// Enter the number: 5
// The factorial of 5 is: 120