/*
(Separating Digits in an Integer) Write a program that inputs one five-digits number, separates the number into
its individual digits and prints the digits separated from one another by three spaces each. [Hint: Use combination
of integer division and the remainder operation.] For Example, if the user types in 42139, the program
should print 4  2   1   3   9 
*/

#include <stdio.h>

int main( void )
{

    int number;

    int digit1;
    int digit2;
    int digit3;
    int digit4;
    int digit5;

    printf("Enter one five digits integer: ");
    scanf("%d", &number);

    digit5 = number % 10;
    number = number / 10;

    digit4 = number % 10;
    number = number / 10;

    digit3 = number % 10;
    number = number / 10;

    digit2 = number % 10;
    number = number / 10;

    digit1 = number % 10;

    printf("%d  %d  %d  %d  %d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}

