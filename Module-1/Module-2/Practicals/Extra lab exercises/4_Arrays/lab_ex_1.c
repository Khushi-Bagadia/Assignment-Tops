/*
LAB EXERCISE 1: Maximum and Minimum in Array

Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
Challenge: Extend the program to sort the array in ascending order.
*/

#include<stdio.h>
int main()
{
	int max,min,a[4],i,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the elements of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);	
	}
	
	//Find Minimum and Maximum value
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}	
	}
	
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("\nMaximum value is %d",max);
	printf("\nMinimum value is %d",min);


	//Sort the array in ascending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nAscending ordered array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}


//o/p:
//Enter the elements of a[0]: 10
//Enter the elements of a[1]: 40
//Enter the elements of a[2]: 20
//Enter the elements of a[3]: 50
//Enter the elements of a[4]: 70
//
//10
//40
//20
//50
//70
//Maximum value is 70
//Minimum value is 10
//Ascending ordered array: 10 20 40 50 70
