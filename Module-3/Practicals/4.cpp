// 4. Setting Up Development Environment
// o Write a program that asks for two numbers and displays their sum. Ensure this is
// done after setting up the IDE (like Dev C++ or CodeBlocks).
// o Objective: Help students understand how to install, configure, and run programs in
// an IDE.


#include <iostream>
using namespace std;
int main()
{
    int n1,n2,ans;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    ans=n1 + n2;

    cout << " The addition of " <<n1<< " & " <<n2<< " is : " << ans;
    return 0;
}

// o/p:
// Enter the first number: 10
// Enter the second number: 20
// The addition of 10 & 20 is : 30