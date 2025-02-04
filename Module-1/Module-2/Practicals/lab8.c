/*
8. Functions in C
Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.
*/

#include<stdio.h>

int fact(int num);    //Function declaration
int main()
{
	int x,ans;
	printf("Enter the value of x:");
	scanf("%d",&x);
	ans=fact(x);	//function call
	printf("Ans of factorial is %d",ans);
	return 0;
}

int fact(int num)	//function definition
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;		
	}
	return fact;
}

//o/p:
//Enter the value of x:5
//Ans of factorial is 120

