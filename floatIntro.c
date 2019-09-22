/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Ask for user input
    float n;                          //define 'n' as type "int"
    printf("Enter a number: ");     //display message
    scanf("%f", &n);                //takes input, stores to 'n' as "int"
    
    
    // Display message
    printf("The number is %.2f", n);  //displays message; %d is placeholder for n

    return 0;
}
