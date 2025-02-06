/*
LAB EXERCISE 2: Count Vowels and Consonants
Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
Challenge: Extend the program to also count digits and special characters
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i, vowels=0, consonants=0, digits=0, specialchar=0;
   
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            specialchar++;
        }
    }
    printf("\nVowels is %d", vowels);
    printf("\nConsonants is %d", consonants);
    printf("\nDigits is %d", digits);
    printf("\nSpeical Characters is %d", specialchar);

    return 0;
}

//o/p:
//Enter a string: hello world! @123
//
//Vowels is 3
//Consonants is 7
//Digits is 3
//Speical Characters is 4
