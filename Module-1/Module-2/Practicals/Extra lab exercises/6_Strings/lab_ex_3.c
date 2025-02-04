/*
LAB EXERCISE 3: Word Count
Write a C program that counts the number of words in a sentence entered by the user.
Challenge: Modify the program to find the longest word in the sentence.
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter A String Name:");
    gets(str);

    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]== ' ' && str[i+1]!= ' ')
        {
            count++;
        }
    }
    printf("\nYour enter a string length is:\t%d", count+1);

    return 0;
}

//o/p:
//Enter A String Name:Hello!! How are you?
//
//Your enter a string length is:  4
