/*
LAB EXERCISE 2: Number Comparison

Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
Challenge: Solve the problem using both if-else and switch-case statements
*/


#include<stdio.h>
int main()
{
	int num1,num2,num3,largest,smallest;
	
	printf("Enter num1:");  //20
	scanf("%d",&num1);
	printf("Enter num2:");   //40
	scanf("%d",&num2);
	printf("Enter num3:");  //60
	scanf("%d",&num3);

//----------------if-else-----------------

	if(num1>=num2 && num1>=num3)
	{
		largest=num1;
	}
	else if(num2>=num1 && num2>=num3)
	{
		largest=num2;
	}
	else
	{
		largest=num3;
	}

	if(num1<=num2 && num1<=num3)
	{
		smallest=num1;
	}
	else if(num2<=num1 && num2<=num3)
	{
		smallest=num2;
	}
	else
	{
		smallest=num3;
	}

	printf("\nLargest number is %d",largest);
	printf("\nSmallest number is %d",smallest);
	

//--------------Using Switch case----------------
	
	//Find Largest number between 3 numbers
	switch(num1>num2) //20>40
	{
		case 1:
			switch(num1>num3)
			{
				case 1:
					largest=num1;
				break;
				case 0:
					largest=num3;
				break;
			}	
		break;
			
		case 0:
			switch(num2>num1) //40>60       //Or switch(num2>num3)
			{
				case 1:
					largest=num2;						
				break;
				case 0:
					largest=num1;
				break;
			}
		break;	
	}
	printf("\nLargest number is %d",largest);
	
	//Find Smallest number between 3 numbers
	switch(num1<num2)   
	{
		case 1:
			switch(num1<num3)		
			{
				case 1:
					smallest=num1;
				break;
				case 0:
					smallest=num3;
				break;
			}	
		break;
			
		case 0:
			switch(num2<num1)		//Or switch(num2<num3)	
			{
				case 1:
					smallest=num2;						
				break;
				case 0:
					smallest=num1;
				break;
			}
		break;	
	}
	
	printf("\nSmallest number is %d",smallest);
	
	return 0;
}


//o/p:
//Enter num1:10
//Enter num2:40
//Enter num3:20
//
//Largest number is 40
//Smallest number is 10

