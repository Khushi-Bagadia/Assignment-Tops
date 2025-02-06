/*
LAB EXERCISE 2: Check Number Properties

Write a C program that takes an integer from the user and checks the following using different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, orzero.
o Whether the number is a multiple of both 3 and 5.
*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter an integer:");
	scanf("%d",&num);
	
	//	Check Whether the number is even or odd.
	
	if(num%2==0)
	{
		printf("\n%d is even",num);
	}
	else
	{
		printf("\n%d is odd",num);
	}
	
	
	//Check Whether the number is positive, negative, or zero.
	
	if(num>0)
	{
		printf("\n%d is positive",num);
	}
	else if(num<0)
	{
		printf("\n%d is negative",num);
	}
	else
	{
		printf("Zero",num);
	}
	
	
	//	Check Whether the number is a multiple of both 3 and 5.
	
	if(num%3==0 && num%5==0)
	{
		printf("\n%d is multiple of both 3 and 5",num);
	}
	else
	{
		printf("\n%d is not multiple of both 3 and 5",num);
	}
	return 0;
}

//o/p:
//Enter an integer:9
//
//9 is odd
//9 is positive
//9 is not multiple of both 3 and 5

