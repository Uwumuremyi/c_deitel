/*
Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area.
Use the constant value 3.14159 for PI. Perform ech of these calculations inside the printf statement(s) and use
the conversion specifier %f.
*/

#include <stdio.h>

int main( void )
{

    int radius;

    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    printf("The diameter is %d\n", radius *2);
    printf("The circumference is %f\n", 2 * 3.14159 * radius);
    printf("The area is %f\n", 3.14159 * radius * radius);

    return 0;    
}