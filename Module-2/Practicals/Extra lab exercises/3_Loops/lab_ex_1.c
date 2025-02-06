/*
LAB EXERCISE 1: Prime Number Check

Write a C program that checks whether a given number is a prime number or not using a
for loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.
*/

#include<stdio.h>
int main()
{
	int num,count=0,i,upper;
	printf("\nEnter the num = ");
	scanf("%d",&num);//4
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	
	if(count==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}

//o/p:
//Enter the num = 7
//
//7 is a prime number
//OR
//Enter the num = 16
//
//16 is not a prime number



//------------------------------

#include<stdio.h>
int main()
{
    int num,i,j;
//	int count=0;
    printf("Enter the number: ");
    scanf("%d",&num);//10
    
    printf("The prime numbers in between the range 1 to %d:\n ",num);
    for(i=1;i<=num;i++)  
    {
        int num = i;  
        int count = 0;
        for(j=2;j<=num/2;j++)
        {
            if(num%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && num!=1)
        {
            printf("%d  ",num);   
        }
    }
    return 0;
}

//o/p:
//Enter the number: 50
//The prime numbers in between the range 1 to 50:
// 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47

