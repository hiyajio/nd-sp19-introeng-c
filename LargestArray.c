#include <stdio.h>

int main()
{
    // Programmer: Juan Sergio A. Buenviaje
    // Date: April 25, 2019
    // Collaborators: N/A
    // 
    // Program: LargetArray.c
    // About: Asks users for how many numbers to put in array, then asks users 
    // for numbers to put in array. Displays greatest number and index of.
    
    
    // Set Parameters (Variables)
    
    int index;
    
    // Ask user how many numbers they want in array
    printf("Enter how many numbers you want to process: ");
    // Put number inputted by user to variable
    scanf("%d", &index);
    
    // Set array for numbers
    float numbArray[index];
    
    // FOR loop for putting numbers in array
    for (int i = 0; i < index; i++) {
        // Ask user for numbers in array
        printf("Enter number: ");
        // Put numbers inputted by user in array
        scanf("%f", &numbArray[i]);
        
    }
    
    
    // Run Backend (Calculations)
    
    // Set variables for looking for greatest number
    float greatNumb;
    int greatIndex;
    
    // FOR loop for looking for greatest number
    for (int j = 1; j < index; j++) {
        // If number w/ index j is greater than number w/ index j-1
        // put number w/ index j in greatNumb variable and take index
        // into greatIndex
        if (numbArray[j] > numbArray[j-1]) {
            greatNumb = numbArray[j];
            greatIndex = j;
        } else {
            // Else do otherwise
            greatNumb = numbArray[j-1];
            greatIndex = j-1;
        }
        
    }
    
    
    // Display Output (Results)
    
    printf("\nLargest element = %.2f\n", greatNumb);
    printf("The element is saved in index # %d.\n", greatIndex);

    return 0;
}
