/*
LAB EXERCISE 2: Multiplication Table

Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N)
*/

#include<stdio.h>
int main()
{
	int num,start,end,i,choice;
	printf("Enter a number:");
	scanf("%d",&num);
	
	printf("Choose your option: ");
	
	printf("\n1.Print Multiplication table from 1 to 10: ");
	printf("\n2.Print Multiplication table from your range: ");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			start=1;
			end=10;
			break;
		case 2:
			printf("Enter the start of the range: ");
			scanf("%d",&start);
			printf("Enter the end of the range: ");
			scanf("%d",&end);
			break;	
	}
	
	printf("Multiplication table of %d from %d to %d",num,start,end);
	for(i=start;i<=end;i++) //i=1; 1<=10
	{
		printf("\n%d x %d = %d",num,i,num*i);	
	}
	return 0;
}	



//o/p:
//Enter a number:5
//Choose your option:
//1.Print Multiplication table from 1 to 10:
//2.Print Multiplication table from your range:
//Enter your choice: 1
//Multiplication table of 5 from 1 to 10
//5 x 1 = 5
//5 x 2 = 10
//5 x 3 = 15
//5 x 4 = 20
//5 x 5 = 25
//5 x 6 = 30
//5 x 7 = 35
//5 x 8 = 40
//5 x 9 = 45
//5 x 10 = 50

//------OR------
//Enter a number:19
//Choose your option:
//1.Print Multiplication table from 1 to 10:
//2.Print Multiplication table from your range:
//Enter your choice: 2
//Enter the start of the range: 1
//Enter the end of the range: 10
//Multiplication table of 19 from 1 to 10
//19 x 1 = 19
//19 x 2 = 38
//19 x 3 = 57
//19 x 4 = 76
//19 x 5 = 95
//19 x 6 = 114
//19 x 7 = 133
//19 x 8 = 152
//19 x 9 = 171
//19 x 10 = 190

