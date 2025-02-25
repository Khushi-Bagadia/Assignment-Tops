//  Variables and Constants
// o Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.
// o Objective: Understand the difference between variables and constants.

#include<iostream>
using namespace std;
#define num1 20 // const declaration
int main()
{
    // Integer datatype
    cout << "The integer numerical value Of num1 is: " <<num1<<endl;

    // Float datatype parameter type and parameter name
    float num2;
    cout<< "\nEnter float the numerical value of num2: ";
    cin>> num2;
    cout<< "The float numerical value of num2 is: "<<num2<<endl;

    // Character datatype with const decalration
    char const c = 'A';
    cout<< "\nThe character of c is: "<<c;

    // String Datatype
    string str = "Hello!!  How are you?";
    cout<< "\nThe value of string: "<<str<<endl;

    // Boolean Datatype
    bool b1 = true;
    bool b2 = false;
    cout<< "The value of boolean b1: "<<b1<<endl;
    cout<< "The value of boolean b2: "<<b2;
    return 0;
}

// o/p:
// The integer numerical value Of num1 is: 20

// Enter float the numerical value of num2: 4.89
// The float numerical value of num2 is: 4.89

// The character of c is: A
// The value of string: Hello!!  How are you?
// The value of boolean b1: 1
// The value of boolean b2: 0