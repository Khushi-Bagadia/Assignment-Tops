/*
12. Structures in C
Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.
*/

#include<stdio.h>
struct Student
{
	char name[50];
	int rollno;
	float marks;
};
int main()
{
	struct Student s[50];	
	int count,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\nEnter details of Student %d\n",i+1);
		
		printf("\nEnter the name = ");
		scanf("%s",&s[i].name);
		printf("\nEnter the rollno = ");
		scanf("%d",&s[i].rollno);
		printf("\nEnter the marks = ");
		scanf(" %f",&s[i].marks);
	}
	
	printf("\nDetails of students:\n");
	for(i=0;i<count;i++)
	{
		printf("\n\nStudent %d:\n",i+1);
		
		printf("\nName = %s",s[i].name);
		printf("\nRollno = %d",s[i].rollno);
		printf("\nMarks = %.2f",s[i].marks);
	}
	return 0;
}

//o/p:
//
//Enter the count = 3
//
//Enter details of Student 1
//
//Enter the name = Khushi
//
//Enter the rollno = 1
//
//Enter the marks = 90.55
//
//Enter details of Student 2
//
//Enter the name = Aayushi
//
//Enter the rollno = 2
//
//Enter the marks = 89.50
//
//Enter details of Student 3
//
//Enter the name = Mitu
//
//Enter the rollno = 3
//
//Enter the marks = 91.2
//
//Details of students:
//
//
//Student 1:
//
//Name = Khushi
//Rollno = 1
//Marks = 90.55
//
//Student 2:
//
//Name = Aayushi
//Rollno = 2
//Marks = 89.50
//
//Student 3:
//
//Name = Mitu
//Rollno = 3
//Marks = 91.20
