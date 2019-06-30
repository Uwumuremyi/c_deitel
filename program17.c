/*(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track 
of several tankfuls of gasoline by recording miles driven and gallons used fo each tankful. Develop a program that
will input the miles drived and gallons used for each tankful. The program should calculate and display the miles
per gallon obtained for each tankful. After processing all input information, the program should calculate and print
the combined miles per gallon obtained for all thankfuls.

Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles / gallon fo this tank was 22.421875


Enter the gallons used (-1 to end): 10.13
Enter the miles driven: 200
The miles / gallon fo this tank was 19.417475

Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles / gallon fo this tank was 24.000000

Enter the gallons used (-1 to end): -1

The overall average miles/gallon was 21.601423

*/

#include <stdio.h>

int main( void )
{

    float gallonsUsed;
    float milesDriven;
    float milesPerGallon;

    float totalGallonsUsed;
    float totalMilesDriven;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallonsUsed);

    while ( gallonsUsed != -1 )
    {

        printf("Enter the miles driven:");
        scanf("%f", &milesDriven);

        totalGallonsUsed = totalGallonsUsed + gallonsUsed;
        totalMilesDriven = totalMilesDriven + milesDriven;

        printf("The miles / gallon for this tank was %f\n\n", milesDriven / gallonsUsed);

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallonsUsed);

    }

    printf("The overall average miles / gallons was %f\n", totalMilesDriven / totalGallonsUsed);

    return 0;
    
}