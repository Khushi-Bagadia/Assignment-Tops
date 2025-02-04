/*
LAB EXERCISE 3: Sum of Array Elements

Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
Challenge: Modify the program to also find the average of the numbers
*/

#include<stdio.h>
int main()
{
	int size,i,sum=0,a[size];
	float avg;
	
	printf("Enter the size of an element: ");
	scanf("%d",&size);
	
	printf("\nEnter %d numbers: ",size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element of a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);	
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
		avg=(float)sum/(float)size;
	}
	
	printf("\nSum is %d",sum);
	printf("\nAverage is %.4f",avg);
	
	return 0;
}


//o/p:
//Enter the size of an element: 5
//
//Enter 5 numbers:
//Enter the element of a[0]: 10
//
//Enter the element of a[1]: 11
//
//Enter the element of a[2]: 21
//
//Enter the element of a[3]: 73
//
//Enter the element of a[4]: 31
//
//10
//11
//21
//73
//31
//Sum is 146
//Average is 29.2000
