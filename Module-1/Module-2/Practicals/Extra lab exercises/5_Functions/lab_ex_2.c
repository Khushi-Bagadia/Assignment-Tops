/*
LAB EXERCISE 2: Factorial Calculation

Write a C program that calculates the factorial of a given number using a function.
Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers
*/

#include<stdio.h>

int fact(int n);		

int main()
{	
	int num,ans;
	printf("Enter a positive number:");
	scanf("%d",&num);
	
	ans=fact(num);
	if(num>0)
	{
		printf("Factorial of %d is %d",num,ans);
	}
	else
	{
		printf("Factorial of Negative number does not exist");
	}
	return 0;
}

int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

//o/p:
//Enter a positive number:5
//Factorial of 5 is:120
//OR
//Enter a positive number:-11
//Factorial of Negative number does not exist
