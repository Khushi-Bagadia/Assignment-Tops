/*
9. Arrays in C
Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a 
two-dimensional array (3x3 matrix) and calculate the sum of all elements.
*/

//for ex:
//Enter the size of the array: 2
//Enter the element of a[0][0]:1
//Enter the element of a[0][1]:2
//Enter the element of a[1][0]:3
//Enter the element of a[1][1]:4
//Array a:
//1	2
//3	4
//Sum of all the elements in the array: 10


#include<stdio.h>
int main()
{
	int size,a[10][10],b[10][10],c[5],sum=0,i,j;
	
//	int c[5]={1,2,3,4,5};
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the 5 elements of c[%d]:",i);
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",c[i]);
	}
	
	
	//	2D ARRAY  (3X3 matrix)
	printf("\nEnter the size of the array:");
	scanf("%d",&size);  //2
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element of a[%d][%d]:  ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Array a:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
	
	//	Addition
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	
	printf("The sum of all the elements in the matrix is %d  ",sum);
	
	return 0;
}


//o/p:

//Enter the 5 elements of c[0]:1
//
//Enter the 5 elements of c[1]:2
//
//Enter the 5 elements of c[2]:3
//
//Enter the 5 elements of c[3]:4
//
//Enter the 5 elements of c[4]:5
//
//1
//2
//3
//4
//5
//Enter the size of the array:3
//
//Enter the element of a[0][0]:  1
//
//Enter the element of a[0][1]:  2
//
//Enter the element of a[0][2]:  3
//
//Enter the element of a[1][0]:  4
//
//Enter the element of a[1][1]:  5
//
//Enter the element of a[1][2]:  6
//
//Enter the element of a[2][0]:  7
//
//Enter the element of a[2][1]:  8
//
//Enter the element of a[2][2]:  9
//Array a:
//1       2       3
//4       5       6
//7       8       9
//
//
//
//The sum of all the elements in the matrix is 45

