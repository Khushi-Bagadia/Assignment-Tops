/*
10. Pointers in C
Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/

#include <stdio.h>
int main() {
    int var = 10;
    int *ptr;
    ptr = &var;

    // Print the initial value of var
    printf("Initial value of var: %d\n", var);

    // Use the pointer to modify the value of var
    *ptr = 20;

    // Print the modified value of var
    printf("Modified value of var: %d\n", var);

    // Print the address of var and the value of ptr
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);

    return 0;
}

//o/p:
//Initial value of var: 10
//Modified value of var: 20
//Address of var: 000000000062FE14
//Value of ptr: 000000000062FE14


