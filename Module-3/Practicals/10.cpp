// 3. Multiplication Table
// o Write a C++ program to display the multiplication table of a given number using a
// for loop.
// o Objective: Practice using loops.

#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the value of n1: ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num * i<< endl;
    }
    return 0;
}

// o/p:
// Enter the value of n1: 17
// 17 * 1 = 17
// 17 * 2 = 34
// 17 * 3 = 51
// 17 * 4 = 68
// 17 * 5 = 85
// 17 * 6 = 102
// 17 * 7 = 119
// 17 * 8 = 136
// 17 * 9 = 153
// 17 * 10 = 170