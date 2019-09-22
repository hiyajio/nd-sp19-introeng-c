#include <stdio.h>
#include <math.h>

int main()
{
    // Programmer: Juan Sergio A. Buenviaje
    // Date: April 25, 2019
    // Collaborators: N/A
    // 
    // Program: kitestring.c
    // About: Calculates & reports amount of string needed to fly 
    // kite at certain height & angle to horizon assuming person 
    // holds kite a distance above ground & wants to have minimum
    // length of string wound around string holder. Program ran 
    // for height 8.2 m, angle 2?/7, 0.25 m of string around 
    // holder held 0.8 m above the ground. 
    
    
    // Set Parameters
    
    // Starting constant variables later used for computing
    float kiteHeight = 8.2; // in m
    float pi = 3.14159;
    float theta = (2*pi)/7;
    float stringWound = 0.25; // in m
    float holdHeight = 0.8; // in m
    
    
    // Run Backend (Calculations)
    
    // Computes string given for flight allowance by getting
    // trigonometric relationship between hypotenuse (length of 
    // string given for allowance), theta, and opposite (height 
    // of kite from "ground level" computed by subtracting 
    // height where kite string was held and height of kite)
    float stringGiven = (kiteHeight - holdHeight)/(sin(theta)); // in m
    
    // Computes for total string length by adding previously
    // computed string allowance given for flight of kite w/
    // wound string and 
    float stringLength = stringGiven + stringWound; // in m
    
    
    // Display Outputs (Results)
    
    // Displays total string length from calculations
    
    printf("Total string length: %.3f m", stringLength);

    return 0;
}
