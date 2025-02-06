/*
6. Looping in C
Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while)
*/


//Using For loop

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d",i);
		printf("\n");
	}
	return 0;
}



//Using While loop

#include<stdio.h>
int main()
{
	int i=1;
//	printf("Enter number:");
//	scanf("%d",&i);
	
	while(i<=10)
	{
		printf("%d",i);
		i++;
		printf("\n");
	}
	return 0;
}



//Using Do-While loop

#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		printf("%d",i);
		i++;
		printf("\n");
	}
	while(i<=10);
		
return 0;
}



	
	
