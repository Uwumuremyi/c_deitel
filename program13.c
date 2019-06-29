/*

(Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
a program that calculates the squares and cubes of the numbers from o to 10 and uses tabs to print
the following table of values:

Number  square  cube
0       0       0
1       1       1
2       4       8
3       9       27
4       16      64
5       25      125
6       36      216
7       49      343
8       64      512
9       81      729
10      100     1000

*/

#include <stdio.h>

int main( void )
{

    printf("\n%-8s%-8s%-8s\n\n", "number", "square", "cube");
    printf("%-8d%-8d%-8d\n", 1, 1*1, 1*1*1);
    printf("%-8d%-8d%-8d\n", 2, 2*2, 2*2*2);
    printf("%-8d%-8d%-8d\n", 3, 3*3, 3*3*3);
    printf("%-8d%-8d%-8d\n", 4, 4*4, 4*4*4);
    printf("%-8d%-8d%-8d\n", 5, 5*5, 5*5*5);
    printf("%-8d%-8d%-8d\n", 6, 6*6, 6*6*6);
    printf("%-8d%-8d%-8d\n", 7, 7*7, 7*7*7);
    printf("%-8d%-8d%-8d\n", 8, 8*8, 8*8*8);
    printf("%-8d%-8d%-8d\n", 9, 9*9, 9*9*9);
    printf("%-8d%-8d%-8d\n\n", 10, 10*10, 10*10*10);

    return 0;
}