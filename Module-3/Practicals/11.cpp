// 4. Nested Control Structures
// o Write a program that prints a right-angled triangle using stars (*) with a nested loop.
// o Objective: Learn nested control structures.

#include<iostream>
using namespace std;
int main()
{
    int row, i, j;
    cout<<"Enter the number of row: ";
    cin>>row;
    for (i=1; i<=row; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// o/p:
// Enter the number of row: 4
// * 
// * * 
// * * * 
// * * * * 