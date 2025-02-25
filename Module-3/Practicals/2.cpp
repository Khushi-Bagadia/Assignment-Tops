// Basic Input/Output
// o Write a C++ program that accepts user input for their name and age and then
// displays a personalized greeting.
// o Objective: Practice input/output operations using cin and cout.

#include<iostream>
using namespace std;
int main()
{
    
    string name;
    int age;

    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the age: ";
    cin>>age;

    cout<<"name=  "<<name<<endl;
    cout<<"age= "<<age;

    // Display a personalized greeting
    cout << "\nHello, " << name << "! You are " << age << " years old.\n";

    return 0;
}

// o/p:
// Enter the name: Heer
// Enter the age: 23
// name=  Heer
// age= 23
// Hello, Heer! You are 23 years old.

