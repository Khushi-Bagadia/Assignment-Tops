/*
LAB EXERCISE 1: Fibonacci Sequence

Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.
*/

#include<stdio.h>    

void fibonacci(int n); 
int main()
{    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fibonacci(n-2);//n-2 because 2 numbers are already printed    
	return 0;  
}

void fibonacci(int n)
{    
    static int num1=0,num2=1,num3;    
    if(n>0)
	{    
        num3 = num1 + num2;    
	    num1 = num2;    
	    num2 = num3;    
	    printf("%d ",num3);    
	    fibonacci(n-1);    
    }    
}   

//o/p: 
//Enter the number of elements: 7
//Fibonacci Series: 0 1 1 2 3 5 8
