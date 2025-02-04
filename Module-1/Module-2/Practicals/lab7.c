/*
7. Loop Control Statements
Write a C program that uses the break statement to stop printing numbers when it reaches 5. 
Modify the program to skip printing the number 3 using the continue statement.
*/


//BREAK STATEMENT USING WHILE LOOP

#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
		printf("\n");
		if(i==5)
		{
			break;
		}
	}
	return 0;	
}

//BREAK STATEMENT USING FOR LOOP

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d",i);
		printf("\n");		
	}
	return 0;	
}





//CONTINUE STATEMENT USING WHILE LOOP

#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		if(i==3)
		{
			i++;
			continue;
			
		}
		printf("%d",i);
		i++;
		printf("\n");
			
	}
	return 0;	
}

//CONTINUE STATEMENT USING FOR LOOP

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("%d",i);
		printf("\n");
	}
	return 0;
}

