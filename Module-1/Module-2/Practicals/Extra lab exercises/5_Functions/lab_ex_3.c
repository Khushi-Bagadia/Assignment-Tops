/*
LAB EXERCISE 3: Palindrome Check

Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
Challenge: Modify the program to check if a given string is a palindrome.
*/

#include<stdio.h>

int reverse(int num);		

int main()
{	
	int n,ans;
	printf("Enter the number:");
	scanf("%d",&n);
	
	ans=reverse(n);
	if(ans==n)
	{
		printf("%d is palindrome",n);
	}
	else
	{
		printf("%d is not palindrome",n);
	}
	return 0;
}

int reverse(int num)
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}

//o/p:
//Enter the number:1221
//1221 is palindrome
//OR
//Enter the number:122
//122 is not palindrome



//Challenge: Modify the program to check if a given string is a palindrome.

//#include <stdio.h>
//#include <string.h>
// 
//void main()
//{
//    char string[25], reverse_string[25] = {'\0'};
//    int  i, length = 0, flag = 0;
// 
//    fflush(stdin);
//    printf("Enter a string: \n");
//    gets(string);
//    
//    for (i = 0; string[i] != '\0'; i++)
//    {
//        length++;
//    }
//    for (i = length - 1; i >= 0; i--)
//    {
//       reverse_string[length - i - 1] = string[i];
//    }
//    
//    //check both string are palindrome or not
//    for (i = 0; i < length; i++)
//    {
//        if (reverse_string[i] == string[i])
//            flag = 1;
//        else
//            flag = 0;
//    }
//    if (flag == 1)
//        printf("%s is a palindrome \n", string);
//    else
//        printf("%s is not a palindrome \n", string);
//}

