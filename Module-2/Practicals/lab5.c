/*
5. Control Flow Statements in C
Write a C program to check if a number is even or odd using an if-else statement. Extend the program 
using a switch statement to display the month name based on the user’s input (1 for January, 
2 for February, etc.)
*/

#include <stdio.h>
int main() 
{
    int num,month;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
	{
        printf("\n%d is even",num);
    } 
	else 
	{
        printf("\n%d is odd",num);
    }

    // Display month name based on user input
    printf("\nEnter a number in between 1-12 to get the month name: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("\nJanuary");
            break;
        case 2:
            printf("\nFebruary");
            break;
        case 3:
            printf("\nMarch");
            break;
        case 4:
            printf("\nApril");
            break;
        case 5:
            printf("\nMay");
            break;
        case 6:
            printf("\nJune");
            break;
        case 7:
            printf("\nJuly");
            break;
        case 8:
            printf("\nAugust");
            break;
        case 9:
            printf("\nSeptember");
            break;
        case 10:
            printf("\nOctober");
            break;
        case 11:
            printf("\nNovember");
            break;
        case 12:
            printf("\nDecember");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

//o/p:
//Enter the number: 8
//
//8 is even
//Enter a number in between 1-12 to get the month name: 5
//
//May

