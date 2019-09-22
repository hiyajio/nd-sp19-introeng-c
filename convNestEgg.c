#include <stdio.h>

int main()
{
    // Programmer: Juan Sergio A. Buenviaje
    // Date: February 5, 2019
    // Collaborators: N/A
    // 
    // Program: convNestEgg.c
    // About: Creates program that takes intial balance that accrues
    // interest yearly & finds balance of account for 30 years.
    
    
    // Set Parameters (Variables)
    
    // Total years that account w/ build
    int totalYears = 30;
    
    // Annual Interest Rate
    float rate = 0.08;
    
    // Set Initial Balance
    float intBal = 1000;
    
    // Create array of all 0's as initial accumulating variables
    float balance[totalYears];

    // Set first value to initial balance
    balance[0] = intBal;
    
    
    // Run Backend (Calculations)
    
    // Use FOR loop to track accumulaton of "Balance"
    // "iYears" is counter variable in loop
    for (int iYears = 1; iYears < totalYears; iYears++) {
        balance[iYears] = balance[iYears-1] + rate*balance[iYears-1];
        
    }
    
    // Display Output (Results)
    printf("The total balance at the end of year %d is %.2f dollars.", totalYears, balance[totalYears-1]);

    return 0;
}
