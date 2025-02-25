// 1. Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++.

#include<iostream>
using namespace std;
void arithmetic_operation()
{
    int n1,n2,ans;
    char ch;
    cout<<"Enter the numerical value of n1: ";
    cin>>n1;
    cout<<"Enter the numerical value of n2: ";
    cin>>n2;

    cout<< "Enter '+', '-', '*', '/' "<<endl;
    cout<< "Enter your choice : ";
    cin>>ch;

    switch(ch)
    {
    case '+':
        ans = n1 + n2;
        cout << "The Addition of " << n1 << " + " << n2 << " is : " << ans;
        break;
    case '-':
        ans = n1 - n2;
        cout << "The Subtraction of " << n1 << " - " << n2 << " is : " << ans;
        break;
    case '*':
        ans = n1 * n2;
        cout << "The Multiplication of " << n1 << " * " << n2 << " is : " << ans;
        break;
    case '/':
        ans = n1 / n2;
        cout << "The Division of " << n1 << " / " << n2 << " is : " << ans;
        break;
        
    default:
        cout << "Invalid Operation";
        break;
    }
}
int main()
{
    arithmetic_operation();
    return 0;
}

// o/p:
// Enter the numerical value of n1: 20
// Enter the numerical value of n2: 10
// Enter '+', '-', '*', '/' 
// Enter your choice : *
// The Multiplication of 20 * 10 is : 200