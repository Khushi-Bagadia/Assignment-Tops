// 1. Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.
// o Objective: Practice conditional statements (if-else).

#include <iostream>
using namespace std;
int main()
{
    int roll_num = 101;
    string str = "Mitu";
    int C_programing = 78, Python = 71, PHP = 70;

    cout << "\nThe roll number of student : " << roll_num;
    cout << "\nStudent name : " << str;
    cout << "\nThe marks of student : " << C_programing;
    cout << "\nThe marks of student : " << Python;
    cout << "\nThe marks of student : " << PHP;
    int ans = C_programing + Python + PHP;

    cout << "\nThe total marks of all subjects : " << ans;

    float per;
    per = (float)ans / (float)3;
    cout << "\nPercantage : " << per;

    if (per >= 1 && per <= 45)
    {
        cout << "\nGrade : C";
    }
    else if (per >= 46 && per <= 80)
    {
        cout << "\nGrade : B";
    }
    else
    {
        cout << "\nGrade : A";
    }

    return 0;
}

// o/p:
// The roll number of student : 101
// Student name : Mitu
// The marks of student : 78
// The marks of student : 71
// The marks of student : 70
// The total marks of all subjects : 219
// Percantage : 73
// Grade : B

