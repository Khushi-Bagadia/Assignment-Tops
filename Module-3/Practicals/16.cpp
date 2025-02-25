// 2. Matrix Addition
// o Write a C++ program to perform matrix addition on two 2x2 matrices.
// o Objective: Practice multi-dimensional arrays.


#include<iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], ans[100][100];
    int size, i, j, k;
    char ch;
    cout << "Enter the size of an array: ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Enter the elements of an array a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Enter the elements of an array b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
    }
    cout << "The array of a is :" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "The array of b is :" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Enter + for addition of 2*2 Matrix" << endl;
    cout << "Enter * for addition of 2*2 Matrix" << endl;
    cout << "Enter your choice : ";
    cin >> ch;
    switch(ch)
    {
    case '+':
        // cout << "The sum of the array a & b is :" << endl;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                ans[i][j] = a[i][j] + b[i][j];
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    case '*':
        // cout << "The multiplication of the array a & b is :" << endl;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    default:
        cout << "Error! Invalid Choice";
        break;
    }

    return 0;
}


// o/p:
// Enter the size of an array: 2
// Enter the elements of an array a[0][0] : 1
// Enter the elements of an array a[0][1] : 2
// Enter the elements of an array a[1][0] : 3
// Enter the elements of an array a[1][1] : 4

// Enter the elements of an array b[0][0] : 5
// Enter the elements of an array b[0][1] : 6
// Enter the elements of an array b[1][0] : 7
// Enter the elements of an array b[1][1] : 8
// The array of a is :
// 1 2 
// 3 4 
// The array of b is :
// 5 6
// 7 8
// Enter + for addition of 2*2 Matrix
// Enter * for addition of 2*2 Matrix
// Enter your choice : +
// 6 8 
// 10 12