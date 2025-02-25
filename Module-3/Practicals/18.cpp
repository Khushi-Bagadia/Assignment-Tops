// 1. Class for a Simple Calculator
// o Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic class structure.


#include<iostream>
using namespace std;
class Calculator
{
    public:
        int sum(int n1, int n2)
        {
            return n1 + n2;
        }
        int sub(int n1, int n2)
        {
            return n1 - n2;
        }
        int mul(int n1, int n2)
        {
            return n1 * n2;
        }
        int div(int n1, int n2)
        {
            if (n1 != 0)
            {
                return (float)n1 / (float)n2;
            }
            else
            {
                cout << "Division by zero is not allowed";
                return 0;
            }
        }
};
int main()
{
    Calculator c;
    
    int n1, n2;
    cout << "Enter the numerical number of n1 : ";
    cin >> n1;
    cout << "Enter the numerical number of n2 : ";
    cin >> n2;

    int ans1 = c.sum(n1, n2); 
    int ans2 = c.sub(n1, n2);
    int ans3 = c.mul(n1, n2);
    int ans4 = c.div(n1, n2);

    cout << "The Addition Of " << n1 << " & " << n2 << " is : " <<ans1<< endl;
    cout << "The Subtraction Of " << n1 << " & " << n2 << " is : " <<ans2<< endl;
    cout << "The Multiplication Of " << n1 << " & " << n2 << " is : " <<ans3<< endl;
    cout << "The Division Of " << n1 << " & " << n2 << " is : " <<ans4<< endl;
    return 0;
}


// o/p:
// Enter the numerical number of n1 : 20
// Enter the numerical number of n2 : 10
// The Addition Of 20 & 10 is : 30
// The Subtraction Of 20 & 10 is : 10
// The Multiplication Of 20 & 10 is : 200
// The Division Of 20 & 10 is : 2