/*
13. File Handling in C
Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/

#include<stdio.h>
int main()
{
    FILE *f1;
    f1=fopen("File.txt","w");
    fprintf(f1,"Hello! How Are You?");
    fclose(f1);

    f1=fopen("File.txt","r");
    char text[100];
    
    if (f1==0)
    {
        printf("File Does Not Exits..!");
    }
    else
    {
        while (fgets(text,sizeof(text),f1))
        {
            printf("%s",text);
        }
        
    }
    
    return 0;
}
