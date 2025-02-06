/*
LAB EXERCISE 1: String Reversal
Write a C program that takes a string as input and reverses it using a function.
Challenge: Write the program without using built-in string handling functions.
*/

#include<stdio.h>
#include<string.h>
void reverse(char c[]);
int main()
{
    char str1[100];
    printf("Display the reverse string using Inbuilt Function....!\n");
    printf("Enter the first string name: ");
    gets(str1);

    strrev(str1);
    printf("Reversed string is:\t%s\n",str1);

    printf("--------------------------------------------------------------------\n");
    printf("Display the reverse string without using Inbuilt Function....!\n");
    char s[100];
    printf("Enter your String name: ");
    gets(s);

    reverse(s);
    return 0;
}

void reverse(char c[])
{
    int i, len = 0, j = 0;
    char s[100];
    for (i = 0; c[i] != '\0'; i++)
    {
        len++;
    }
    for (i=len-1;i>=0;i--)
    {
        s[j] = c[i];
        j++;
    }

    printf("Reverse string is:\t");
    for (i=0;c[i]!='\0';i++)
    {
        printf("%c", s[i]);
    }
}

//o/p:
//Display the reverse string using Inbuilt Function....!
//Enter The First String Name: Hello World
//Reversed string is:     dlroW olleH
//--------------------------------------------------------------------
//Display the reverse string without using Inbuilt Function....!
//Enter your String name: Tops technology
//Reverse string is:      ygolonhcet spoT


