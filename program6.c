/*
Write a program that asks the user to enter two integes, obtains the numbers from the user, 
then prints the larger number followed by the words "is larger." If the numbers are equal, print 
the message "These numbers are equal." Use the single-selection form of the if statement you learned
in this chapter.
*/

#include <stdio.h>

int main( void )
{

    int num1;
    int num2;

    printf("Enter two integers separated by a space ");

    scanf("%d", &num1);

    scanf("%d", &num2);

    if ( num1 > num2 )
    {

        printf("%d is larger\n", num1);
    }

    if ( num2 > num1 )
    {

        printf("%d num2 is larger\n", num2);

    }

    if ( num1 == num2 )
    {

        printf("These numbers are equal");

    }

    return 0;

}