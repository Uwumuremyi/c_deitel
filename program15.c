/* COUNTER CONTROLLED REPETITION DEMO

A class of 10 students took a quiz. The grades(integers in the range 0 to 100) for this quiz
are available to you. Determine the class average 
*/

#include <stdio.h>

int main( void )
{

    int counter;
    int grade;
    int total;
    int average;

    total = 0;
    counter = 1;

    while ( counter <= 10 )
    {

        printf("Enter grade: ");
        scanf("%d", &grade);
        if ( grade < 0 || grade > 100 )
        {

            continue;
            
        }
        total = total + grade;
        counter = counter + 1;

    }

    average = total / 10;

    printf("Class average is %d\n", average);

    return 0;
}