/*
4. Operators in C
Write a C program that accepts two integers from the user and performs arithmetic, relational and 
logical operations on them. Display the results.
*/

//Arithmetic operations : +,-,*,/,%
//Relational operations(Comparison operator) : <,>,<=,>=,==,!=
//Logical operations : &&,||,!

#include <stdio.h>
int main() 
{
    int num1, num2; // Declare two integer variables

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    // Perform Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("\n%d + %d = %d", num1, num2, num1 + num2);
    printf("\n%d - %d = %d", num1, num2, num1 - num2);
    printf("\n%d * %d = %d", num1, num2, num1 * num2);
    printf("\n%d / %d = %d", num1, num2, num1 / num2);
    printf("\n%d   %%   %d = %d", num1, num2, num1 % num2);
    
    
    // Perform Relational operations
    printf("\n\n--- Relational Operations ---\n");
    printf("\n%d > %d: %d", num1, num2, num1 > num2);
    printf("\n%d < %d: %d", num1, num2, num1 < num2);
    printf("\n%d >= %d: %d", num1, num2, num1 >= num2);
    printf("\n%d <= %d: %d", num1, num2, num1 <= num2);
    printf("\n%d == %d: %d", num1, num2, num1 == num2);
    printf("\n%d != %d: %d", num1, num2, num1 != num2);
    
    
    // Perform logical operations
    printf("\n--- Logical Operations ---\n");
    printf("\n(%d > 0) && (%d > 0): %d", num1, num2, (num1 > 0) && (num2 > 0));
    printf("\n(%d > 0) || (%d > 0): %d", num1, num2, (num1 > 0) || (num2 > 0));
    printf("\n!(%d > 0): %d\n", num1, !(num1 > 0));
    
    return 0;
}

//o/p:
//Enter the first number: 6
//Enter the second number: 3
//
//--- Arithmetic Operations ---
//
//6 + 3 = 9
//6 - 3 = 3
//6 * 3 = 18
//6 / 3 = 2
//6   %   3 = 0
//
//--- Relational Operations ---
//
//6 > 3: 1
//6 < 3: 0
//6 >= 3: 1
//6 <= 3: 0
//6 == 3: 0
//6 != 3: 1
//--- Logical Operations ---
//
//(6 > 0) && (3 > 0): 1
//(6 > 0) || (3 > 0): 1
//!(6 > 0): 0
