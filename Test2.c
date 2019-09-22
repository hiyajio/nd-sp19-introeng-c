#include <stdio.h>
// Function declaration
double c2f(double i);

int main()
{
    // Programmer: Juan Sergio A. Buenviaje
    // Date: April 25, 2019
    // Collaborators: N/A
    // 
    // Program: test2.m
    // About: Uses function c2f to convert Celsius to Fahrenheit
    // and displays results in tabulated format
    
    
    // Set Parameters (Variables)
    
    // Initialize variables for loop & function
    int cFinal = 8;
    double result;
    
    
    // Run Backend (Calculations)
    
    // Displays headers for table
    printf("T(C)     T(F)\n");
    
    // FOR loop runs temp in C thru c2f function to get temp in F
    for (double i = 0; i <= cFinal; i = i + 2) {
        
        double cels = i;
        result = c2f(i);
        // Displays temp in C & F through sprintf formatting
        // sprintf used for better formatting of table
        printf("%.1f      %.1f\n", cels, result);   
    }
    
    
    // Display Output (Results)
    // Combined with segment "Run Backend (Calculations)"

    return 0;
}

// Function c2f
double c2f(double i) {
    double celsius = i;
    double fahren = 1.8*celsius + 32;
    
    return fahren;
}