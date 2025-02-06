/*
Lab Challenge 1: Armstrong Number
Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
Challenge: Write a program to find all Armstrong numbers between 1 and 1000.
*/

#include<stdio.h>
int main()
{
	int num,cnt=0,rem,i,power,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	int copy = num;
	while(num!=0)
	{
		num = num/10;
		cnt++;
	}
	for(i=1;i<=cnt;i++)
	{
		rem = temp%10;
		power = pow(rem,cnt);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}

//o/p:
//Enter the number = 153
//
//153 is an armstrong number

//Or

//Enter the number = 123
//
//123 is not an armstrong number

