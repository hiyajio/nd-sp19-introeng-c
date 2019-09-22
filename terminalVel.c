/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Define variables and data types
    float g = 9.81;         // Gravity
    float Cd = 0.5;         // Drag coefficient
    float rho = 1.225;      // Air Density
    float m;                // Mass (to be defined by user)
    float A;                // Area (to be defined by user)
    
    // Get user input
    printf("Enter the mass: ");     // Display message
    scanf("%f", &m);                // Take user input
    printf("Enter the area: ");     // Display message
    scanf("%f", &A);                // Take user input
    
    // Perform calculations
    float velocity;
    velocity = sqrt((2*m*g)/(rho*A*Cd));        // Perform calculations
    
    // Display results
    printf("The terminal velocity is %.2f m/s.", velocity);
                // "X.2f" creates two decimal places for float variable
    
    return 0;
}
