#include <stdio.h>

int main()
{
    // Programmer: Juan Sergio A. Buenviaje
    // Date: April 25, 2019
    // Collaborators: N/A
    // 
    // Program: fibonacci.c
    // About: Computes first N Fibonacci numbers & finds their sum 
    // starting from fib(1)=0 & fib(2)=1. 
    
    
    // Set Parameters (Variables)
    
    // Set initial values
    int N;
    printf("How many Fibonacci numbers to sum up? ");
    scanf("%d", &N);
    int fib1 = 0;
    int fib2 = 1;
    int total = 1;
    
    // Set counter
    int x = 1;
    printf("%d, ", fib1);
    printf("%d, ", fib2);
    
    // Run Backend (Calculations)
    
    // WHILE loop
    while (x < (N-1)) {
        
        // Assigns total of first two variables to a third
        int fib3 = fib1 + fib2;
        // Totals 'total' w/ itself + third variable
        total = total + fib3;
        // Reassigns numbers to increment them for next loop
        fib1 = fib2;
        fib2 = fib3;
        if (x == N-2) {
            printf("%d \n", fib3);
        } else {
            printf("%d, ", fib3);    
        }
        
        // Increase counter to eventually get out of WHILE loop
        x = x + 1;   
    }
    
    
    // Display Output (Results)
    
    // Displays total
    printf("The sum of the first %d Fibonacci numbers is %d.", N, total);

    return 0;
}