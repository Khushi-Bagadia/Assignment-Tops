/* 
3. Basic Structure of a C Program
Write a C program that includes variables, constants, and comments. Declare and use different
data types (int, char, float) and display their values.
*/

#include <stdio.h>
#define PI 3.14
#define name "Khushi"

int main() 
{
	// Declare variables of different data types
	int marks = 93;        
    char grade = 'A';       
    float pi = 3.14159;     
    
	// Define constants
	const int rollno=4;			// Integer constant
	
	// Display the values of the variables
	printf("\nMarks is %d",marks);
    printf("\nGrade is %c",grade);
    printf("\nValue of PI is %f",pi);
	
	// Display the values of the constants
    printf("\nValue of PI is %f",PI);
    printf("\nName is %s",name);
    printf("\nRollno is %d",rollno);
	
    //This is a Single line comment
    /*
    
	    This is a 
		Multiline comment
    
    */
    
    return 0;
}

//o/p:
//Marks is 93
//Grade is A
//Value of PI is 3.141590
//Value of PI is 3.140000
//Name is Khushi
//Rollno is 4

