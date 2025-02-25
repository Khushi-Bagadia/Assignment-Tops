// 3. POP vs. OOP Comparison Program
// o Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.
// o Objective: Highlight the difference between POP and OOP approaches.

#include<iostream>
using namespace std;

int main()
{
    int length,breath,area;

    cout<<"Enter the length= ";
    cin>>length;

    cout<<"Enter the breath= ";
    cin>>breath;

    area=length*breath;

    cout<<"Area of rectangle= "<<area;

    return 0;
}

// o/p:
// Enter the length= 5
// Enter the breath= 6
// Area of rectangle= 30