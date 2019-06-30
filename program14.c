/*
(BODY MASS INDEX CALCULATOR) Create a BMI(Body Mass Index) Calculator application that reads the user's weight in pounds
and height in inches, then calculates and displays the user's body mass index.

BMI = (weightInPounds * 703) / (heightInInches * heightInInches)
*/

#include <stdio.h>

int main( void )
{

    int weightInPounds;
    int heightInInches;

    double BMI;

    printf("\n\nBMI Calculator\n");

    printf("\n\nEnter weight in pounds: ");
    scanf("%d", &weightInPounds);

    printf("Enter height in inches: ");
    scanf("%d", &heightInInches);

    BMI = (weightInPounds * 703) / (heightInInches * heightInInches);

    printf("\nYour BMI is: %f\n\n", BMI);

    printf("-------------------------------------------------------\n\n");

    printf("BMI Values: \n\n");

    printf("Underweight:  less than 18.5\n");
    printf("Normal:       between 18.5 and 24.9\n");
    printf("Overweight:   between 25 and 29.9\n");
    printf("Obese:        30 or greater\n\n");

    printf("--------------------------------------------------------\n\n");

    return 0;
}