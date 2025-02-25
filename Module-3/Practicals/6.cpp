// 2. Type Conversion
// o Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.
// o Objective: Practice type casting in C++.


#include <iostream>
using namespace std;
int main()
{
    // Implicit Type conversion
    int n1 = 10;
    cout << "The implicit type conversion is : " <<n1;
    // Explicit Type conversion
    cout << endl << "--------------------------";
    float n2 = 20.40;
    double e = (int)n2;
    cout << "\nExplicit type conversion (C-style cast):" <<endl;
    cout << "Orignal value Of n2 is: " <<n2<<endl;
    cout << "The explicit type conversion is : " <<e;
    return 0;
}

// o/p:
// The implicit type conversion is : 10
// --------------------------
// Explicit type conversion (C-style cast):
// Orignal value Of n2 is: 20.4
// The explicit type conversion is : 20