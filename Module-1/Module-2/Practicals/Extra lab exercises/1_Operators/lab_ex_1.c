/*
1. Operators

LAB EXERCISE 1: Simple Calculator
Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
Challenge: Extend the program to handle invalid operator inputs.

*/

#include<stdio.h>
int main()
{
	int num1,num2;
	char choice,ch='%';
	
	printf("\nEnter the value of num1:");
	scanf("%d",&num1);
	printf("\nEnter the value of num2:");
	scanf("%d",&num2);
	
	printf("\n1.press '+' for addition");
	printf("\n1.press '-' for subtraction");
	printf("\n1.press '*' for multiplication");
	printf("\n1.press '/' for division");
	printf("\n1.press '%c' for remainder",ch);
	printf("\nEnter your choice:");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-':
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*':
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/':
			printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
		break;
		case '%':
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default :
			printf("\nInvalid input!");
	}
	return 0;
}

//o/p:
//Enter the value of num1:11
//
//Enter the value of num2:33
//
//1.press '+' for addition
//1.press '-' for subtraction
//1.press '*' for multiplication
//1.press '/' for division
//1.press '%' for remainder
//Enter your choice:%
//
//The remainder of 11 and 33 is 11
