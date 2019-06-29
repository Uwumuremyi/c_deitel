/*
(ODD OR EVEN) Write a program that reads an integer and determines and prints whther it is odd or even.
[Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves 
a remainder of zero when divided by2. ]
*/

#include <stdio.h>

int main( void )
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if ( number % 2 == 0 )
    {

        printf("The number you entered is even.\n");

    }

    else
    {
        
        printf("The number you entered is not even.\n");

    }

    return 0;
    
}