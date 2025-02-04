/*
11. Strings in C
Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the str1: ");
	gets(str1);
	printf("\nEnter the str2: ");
	gets(str2);
	
	printf("\nOriginal value of str1 is %s",str1);
	printf("\nOriginal value of str2 is %s",str2);
	
	strcat(str1,str2);
	
	printf("\nMerged string is %s",str1);
	printf("\nValue of str2 is %s",str2);
	
	int merg_len = strlen(str1);
	printf("\nLength of Merged string is %d ",merg_len);
	
	return 0;
}

//o/p:
//Enter the str1: Hello
//
//Enter the str2: World
//
//Original value of str1 is Hello
//Original value of str2 is World
//Merged string is HelloWorld
//Value of str2 is World
//Length of Merged string is 10

