/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numbNum;
    
    printf("Enter how many numbers you want to process: ");
    scanf("%d", &numbNum);
    
    int total = 0;
    int dummy = 0;
    float average = 0;
    
    for (int i = 0; i < numbNum; i++) {
        printf("Enter number: ");
        scanf("%d", &dummy);
        total = total + dummy;
    }
    
    average = total / numbNum;
    
    printf("The average of the %d numbers is %.1f", numbNum, average);
    
    return 0;
}
