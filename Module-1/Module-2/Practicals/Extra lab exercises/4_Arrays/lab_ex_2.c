/*
LAB EXERCISE 2: Matrix Addition

Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
*/

#include<stdio.h>
int main()
{
	int num,start,end,choice;
	int size,a[10][10],b[10][10],ans[10][10],i,j,k,row,col;
		
	printf("Choose your option: ");
	
	printf("\n1.Addition ");
	printf("\n2.Multiplication ");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
				
			printf("Enter the row of an array:");
			scanf("%d",&row);
			
			printf("Enter the column of an array:");
			scanf("%d",&col);
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("\nEnter the elements of a[%d][%d]: ",i,j);
					scanf("\n%d",&a[i][j]);
				}
			}
			
			printf("Array a:\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("\nEnter the elements of b[%d][%d]: ",i,j);
					scanf("\n%d",&b[i][j]);
				}
			}
			
			printf("Array b:\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			
			//Resultant matrix
			printf("Resultant maxtrix:\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j]=a[i][j]+b[i][j];
				}
			}
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 2:
			
			printf("\nEnter the size of an array: ");
			scanf("%d",&size);//2
			
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("\nEnter the element in a[%d][%d]: ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("\nEnter the element in b[%d][%d]: ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
			
			//Array a
			printf("Array a:\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			
			//Array b
			printf("Array b:\n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			
			//Multiplication
			for(i=0;i<size;i++) //row
			{
				for(j=0;j<size;j++) //col
				{
					ans[i][j] = 0;
					for(k=0;k<size;k++) //col
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);   
					}
				}
			}
				
			printf("\nArray ans: \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}

	}
	
	return 0;
}


//o/p:
//Choose your option:
//1.Addition
//2.Multiplication
//Enter your choice: 2
//
//Enter the size of an array: 3
//
//Enter the element in a[0][0]: 10
//
//Enter the element in a[0][1]: 20
//
//Enter the element in a[0][2]: 30
//
//Enter the element in a[1][0]: 40
//
//Enter the element in a[1][1]: 50
//
//Enter the element in a[1][2]: 60
//
//Enter the element in a[2][0]: 70
//
//Enter the element in a[2][1]: 80
//
//Enter the element in a[2][2]: 90
//
//Enter the element in b[0][0]: 1
//
//Enter the element in b[0][1]: 2
//
//Enter the element in b[0][2]: 3
//
//Enter the element in b[1][0]: 4
//
//Enter the element in b[1][1]: 5
//
//Enter the element in b[1][2]: 6
//
//Enter the element in b[2][0]: 7
//
//Enter the element in b[2][1]: 8
//
//Enter the element in b[2][2]: 9
//Array a:
//10 20 30
//40 50 60
//70 80 90
//Array b:
//1 2 3
//4 5 6
//7 8 9
//
//Array ans:
//300 360 420
//660 810 960
//1020 1260 1500




