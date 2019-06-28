/*

Write a program that inputs three different integers from the keyboard, then prints the sum,
the average, the product, the smallest and the largest of these numbers. Use onlye the single-selection
form of the if statement you learned in this chapter. 

*/

#include <stdio.h>

int main( void )
{

    int num1;
    int num2;
    int num3;

    int sum;
    int average;
    int product;
    
    int smallest;
    int largest;

    printf("Input three different integers: ");

    scanf("%d", &num1);

    scanf("%d", &num2);

    scanf("%d", &num3);


    sum = num1 + num2 + num3;
    average = sum / 3;
    product = num1 * num2 * num3;

    smallest = num1;

    if ( num2 < smallest )
    {

        smallest = num2;

    }

    if ( num3 < smallest )
    {

        smallest = num3;

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

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
