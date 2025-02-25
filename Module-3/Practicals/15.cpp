// 1. Array Sum and Average
// o Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.
// o Objective: Understand basic array manipulation.

#include<iostream>
using namespace std;
int main()
{
    int a[100], size, i, sum = 0;

    cout << "Enter the size of an array: ";
    cin >> size;

    for (i=0; i<size; i++)
    {
        cout << "Enter the array elements [" << i << "]: ";
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "The sum of the array is : " << sum << endl;
    cout << "The average of the array is : " << (float)sum / (float)size;

    return 0;
}

// o/p:
// Enter the size of an array : 3
// Enter the array elements [0] : 1
// Enter the array elements [1] : 2
// Enter the array elements [2] : 3
// The sum of the array is : 6
// The average of the array is : 2