/*
LAB EXERCISE 3: Sum of Digits

Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
Challenge: Extend the program to reverse the digits of the number.
*/

#include<stdio.h>
int main()
{
	int reminder,no,sum=0,reverse=0;
	
	printf("Enter any number:");
	scanf("%d",&no);
	
	while(no>0)
	{	
		reminder=no%10;
		sum=sum+reminder;
		reverse=reverse*10+reminder;
		no=no/10;	
	}
		
	printf("Sum of given value is %d",sum);
	printf("\nReverse of given value is %d",reverse);
	
	return 0;
}

//o/p:
//Enter any number:123
//Sum of given value is 6
//Reverse of given value is 321


