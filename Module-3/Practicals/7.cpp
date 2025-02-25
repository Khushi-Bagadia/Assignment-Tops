// 3. Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.
// o Objective: Reinforce understanding of different types of operators in C++


#include <iostream>
using namespace std;
int main()
{
    int n1, n2, ans;
    cout << "Enter the numerical value of n1: ";
    cin >> n1;
    cout << "Enter the numerical value of n2: ";
    cin >> n2;

    // Arithmetic Operation
    cout << "\n\nArithmetic Operation\n" << endl;
    ans = n1 + n2;
    cout << "The Addition of " << n1 << " + " << n2 << " is : " << ans << endl;
    ans = n1 - n2;
    cout << "The Subtraction of " << n1 << " - " << n2 << " is : " << ans << endl;
    ans = n1 * n2;
    cout << "The Multipliction of " << n1 << " * " << n2 << " is : " << ans << endl;
    ans = n1 / n2;
    cout << "The Division of " << n1 << " / " << n2 << " is : " << ans << endl;
    ans = n1 % n2;
    cout << "The Reminder of " << n1 << " % " << n2 << " is : " << ans << endl;

    // Relational Operation
    cout << "\nRelational Operations\n";
    cout << "\nThe Eqale Relational Operater  " << n1 << " == " << n2 << " Is : " << (n1 == n2) ? "True" : "False";
    cout << "\nThe Not Eqale Relational Operater  " << n1 << " != " << n2 << " Is : " << (n1 != n2) ? "True" : "False";
    cout << "\nThe Greater Than Relational Operater  " << n1 << " > " << n2 << " Is : " << (n1 > n2) ? "True" : "False";
    cout << "\nThe Less Than Relational Operater  " << n1 << " < " << n2 << " Is : " << (n1 < n2) ? "True" : "False";

    // Logical Operation
    cout << "\n\nLogical Operations\n";
    cout << "\nThe && Logical Operater  " << n1 << " == " << n2 << " Is : " << (n1 > 0 && n2 > 0) ? "True" : "False";
    cout << "\nThe || Logical Operater  " << n1 << " != " << n2 << " Is : " << (n1 > 0 || n2 > 0) ? "True" : "False";
    cout << "\nThe ! Logical Operater  " << n1 << " > " << n2 << " Is : " << !(n1 > n2) ? "True" : "False";

    // Bitwise  Operation
    cout << "\n\nBitwise Operations\n";
    cout << "\nThe & Bitwise Operater  " << n1 << " == " << n2 << " Is : " << (n1 > 0 & n2 > 0) ? "True" : "False";
    cout << "\nThe | Bitwise Operater  " << n1 << " != " << n2 << " Is : " << (n1 > 0 | n2 > 0) ? "True" : "False";
    cout << "\nThe >> Bitwise Operater  " << n1 << " > " << n2 << " Is : " << !(n1 >> n2) ? "True" : "False";
    cout << "\nThe << Bitwise Operater  " << n1 << " > " << n2 << " Is : " << !(n1 << n2) ? "True" : "False";

    return 0;
}

