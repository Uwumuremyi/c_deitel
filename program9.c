/*
Write a program that reads in five integers and then determines and prints the largest and the smallest
integers in the group. Use only the programming techniques you have learned in this chapter.
*/

#include <stdio.h>

int main(void)
{

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    int smallest;
    int largest;

    printf("Enter five integers separated by spaces: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    smallest = num1;

    if ( num2 < smallest )
    {

        smallest = num2;

    }

    if ( num3 < smallest )
    {

        smallest = num3;

    }

    if ( num4 < smallest )
    {

        smallest = num4;

    }

    if ( num5 < smallest )
    {

        smallest = num5;

    }

    largest = num1;

    if ( num2 > largest )
    {

        largest = num2;

    }

    if ( num3 > largest )
    {

        largest = num3;

    }

    if ( num4 > largest )
    {

        largest = num4;

    }

    if ( num5 > largest )
    {

        largest = num5;

    }

    printf("The smallest is %d\n", smallest);
    printf("The largest is %d\n", largest);
}