// 3. Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

void global_variable(int n1)
{
    cout << "The global variable value is :" << n1 << endl;
}
void local_variable()
{
    int n2;
    cout << "Enter the numerical value of n2: ";
    cin >> n2;
    cout << "The local variable value is : " << n2 << endl;
}

int main()
{
    int n1, ans;
    cout << "Enter the numerical value of n1: ";
    cin >> n1;
    global_variable(n1);
    
    local_variable();
    return 0;
}