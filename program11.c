/*
(MUTLIPLES) Write a program that reads in two integers and determines and prints if the first
is a multiple of the second. [Hint: Use the remainder operator.] 
*/

#include <stdio.h>

int main( void )
{

    int x;
    int y;

    printf("Enter two integers separated by spaces and  I will tell you if the first is a multiple of the second: ");
    scanf("%d %d", &x, &y);

    if ( x % y == 0 )
    {

        printf("%d is a multiple of %d\n", x, y);

    }

    else
    {
        
        printf("%d is not a multiple of %d\n", x, y);
        
    }
    

    return 0;
}