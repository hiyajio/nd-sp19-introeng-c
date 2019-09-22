/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int examScores[5][3] = {
      {90, 87, 94},
      {88, 83, 90},
      {91, 92, 95},
      {77, 79, 84},
      {82, 79, 86},
    };
    
    
    float total = 0;
    
    for (int i = 0; i <= 4; i++){
        total = total + examScores[i][2];    
    }
    
    float averageExam3 = total / 5;
    
    
    total = 0;
    
    for (int i = 0; i <= 2; i++){
        total = total + examScores[1][i];    
    }
    
    float averageStudent2 = total / 3;
    
    
    printf("Average Scores for Exam 3 is: %.1f.\n", averageExam3);
    
    printf("Average Scores of Student 2 is: %.1f.\n", averageStudent2);

    return 0;
}
