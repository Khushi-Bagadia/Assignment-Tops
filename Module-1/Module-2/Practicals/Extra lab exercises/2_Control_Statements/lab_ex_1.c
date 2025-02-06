/*
LAB EXERCISE 1: Grade Calculator

Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
Use if-else or switch statements for the decision-making process.
*/


#include <stdio.h>

int main() {
    int marks;
    char grade;
    
    printf("Enter the marks of the student (0-100): ");
    scanf("%d", &marks);

    if (marks > 90) 
	{
        grade = 'A';
    }
	else if (marks > 75 && marks <= 90)
	{
        grade = 'B';
    }
	else if (marks > 50 && marks <= 75) 
	{
        grade = 'C';
    } 
	else if (marks >= 0 && marks <= 50)
	{
        grade = 'D';
    }
    else
    {
    	printf("Invalid input! Please enter marks between 0 and 100\n");
    	return 1;
	}

    printf("The grade for the student is: %c\n", grade);

    return 0;
}

//o/p:
//Enter the marks of the student (0-100): -1
//Invalid input! Please enter marks between 0 and 100




