/* Write a program that asks the user to enter two numbers, obtains them from the user,
and prints their sum, product, difference, quotient and remainder */

#include <stdio.h>

int main( void )
{

    int num1;
    int num2;

    int sum;
    int product;
    int difference;
    int quotient;
    int remainder;

    printf("Enter two numbers separated by a space:\n");

    scanf("%d", &num1);

    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;


    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The difference is %d\n", difference);
    printf("The quotient is %d\n", quotient);
    printf("The remainder is %d\n", remainder);

    return 0;

}